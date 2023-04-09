#include <stdlib.h>
#include "main.h"
/**
* binary_to_uint - converts a binary number to unsigned int
* @b: this is the string containing the binary number
* Return: the converted numbe
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_ans = 0;
	int j;

	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		dec_ans = (dec_ans << 1) | (b[j] - '0');
	}
	return (dec_ans);
}
