#include "main.h"
#include <stdlib.h>
/**
* read_textfile - this function reads a text and prints it to POSIX stdout
* @filename: name of file containing text to be read and printed
* @letters: number of letters to be read
* Return: 0 if filename is NULL or file cannot be opened or read or
* if write fails or does not write the expected amount of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr;
	ssize_t rd;
	ssize_t fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(fd);
	return (wr);
}
