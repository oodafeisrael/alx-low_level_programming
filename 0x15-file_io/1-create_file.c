#include "main.h"
/**
* create_file - this creates a file
* @filename: this is the name of the file to be created
* @text_content: string (content) to be written to the file
* Return: 1 if successful, -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len_letters;
	int res_w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len_letters = 0; text_content[len_letters]; )
			len_letters++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	res_w = write(fd, text_content, len_letters);
	if (fd == -1 || res_w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
