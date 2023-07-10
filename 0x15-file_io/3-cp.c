#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024
char *create_buffer(char *file);
void close_file(int fd);
/**
* main - function that copies the content of a file to another file
* @argc: argument count
* @argv: array of pointers to the argument vectors
* Return: 0 on success.
* Description: if the argument count is incorrect -exit with code 97
* if file_from does not exist or cannot be read- exit with code 98
* if file_to cannot be created or written to - exit with code 99
* if file_to or file from cannot be closed - exit with code 100
*/
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buf, BUFSIZE);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(from, buf, BUFSIZE);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
/**
* create_buffer - function that allocates 1024 bytes to a buf
* @file: name of file for buffer storage
* Return: A pointer to the newly-allocated buffer
*/
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * BUFSIZE);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
* close_file - function to close file descriptors
* @fd: th file descriptor to be closed
*/
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


