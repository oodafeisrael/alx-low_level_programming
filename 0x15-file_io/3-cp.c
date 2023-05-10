#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *creat_buffer(char *file);
void close_file(int fd);
/**
* creat_buffer - this function allocates 1024 bytes to a buffer
* @file: name of file buffer for storing chars
* Return: pointer to the newly_allocated buffer
*/
char *creat_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"ERRor: Unable to write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
* close_file - closes file descriptors
* @fd: the file descriptor to be closed
*/
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "ERRor: unable to close fd %d|\n", fd);
		exit(100);
	}
}
/**
* main - function that copies the content of  a file to another file
* @argc: the number of arguments applied to the programm
* @argv: An array of pointersa to the argunet
* Return: 0 on success
* Description: If the argument count is not correct - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, " usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = creat_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: unable to read from file to %s\n", argv[2]);
			free(buffer);
			exit(98);
		}
		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, 
				"Error: Unable to write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
