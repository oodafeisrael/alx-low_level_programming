#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - this reads the text file and prints the letters
* @filename: this is the name of the fike
* @letters: number of letters to be read and printed
* Return: number of letters read and printed. 0 if it fails or filename is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbr;
	ssize_t nbw;
	int fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	nbr = read(fd, buf, letters);
	nbw = write(STDOUT_FILENO, buf, nbr);
	free(buf);
	close(fd);
	return (nbw);
}
