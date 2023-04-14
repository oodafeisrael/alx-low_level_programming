# include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* create_buffer - this gives 1024 bytes to a buffer
* @file: file name where buffer stores chars
* Return: a pointer to the new buffer
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
* close_file - closes file descritors
* @f_dp: Descriptor file to be closed
*/
void close_file(int f_dp)
{
	int k;

	k = close(f_dp);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_dp %d\n", f_dp);
		exit(100);
	}
}
/**
* main - function that copies content of one file to another file
* @argc: argument count
* @argv: array of string pointers containing command line arguments
* Dercription: for incorect argument count - exit code is 97
* if file_to cannt be written to or created - exit code 99
* if file_from does not exist or cannot be read - exit code 98
* if file_to or file_from cannot be closed - exit code 100
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int f;
	int t;
	int r;
	int w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
	w = write(t, buffer, r);
	if (t == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %sn", argv[2]);
		free(buffer);
		exit(99);
	}
	r = read(f, buffer, 1024);
	t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(f);
	close_file(t);
	return (0);
}
