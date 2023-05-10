#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* append_text_to_file - function that appends text to the end of a file
* @filename: name of file to write into
* @text_content: text tobe appended to file
* Return: 1 on success and -1 if failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
