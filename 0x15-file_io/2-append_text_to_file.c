#include "main.h"
/**
* append_text_to_file - adds text at the end of a file
* @filename: Name of the file
* @text_content: string to be appended to the end of the file
* Return: if file exists return 1 or -1 if file does not exists or
* you donot have the required permission.
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f_dpt, rw;
	int len_text = 0;

	if (filename == NULL)
		return (-1);
	f_dpt = open(filename, O_WRONLY | O_APPEND);
	if (f_dpt == -1)
		return (-1);
	if (text_content)
	{
		for (len_text = 0; text_content[len_text]; len_text++)
		rw = write(f_dpt, text_content, len_text);
		if (rw == -1)
			return (-1);
	}
	close(f_dpt);
	return (1);
}
