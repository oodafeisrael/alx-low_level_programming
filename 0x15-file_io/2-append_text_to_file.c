#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* append_text_to_file - function that appends text to the end of a file
* @filename: name of file to append text to
* @text_content: text to append to file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int u, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	u = open(filename, O_WRONLY | O_APPEND);
	wr = write(u, text_content, len);
	if (u == -1 || wr == -1)
	{
		return (-1);
	}
	close(u);
	return (1);
}
