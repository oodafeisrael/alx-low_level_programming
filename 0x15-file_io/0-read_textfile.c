#include "main.h"
#include <stdlib.h>
/**
* read_textfile - function that reads text file and prints it on Stdout
* @filename: name of textfile to be read and printed
* @letters: number of characters to be read and printed
* Return: number of chars printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t rd;

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
