#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - function that converts a binary number to unsigned int.
* @b: string to be converted
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_num = 0;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		dec_num = 2 * dec_num + (b[x] - '0');
	}
	return (dec_num);
}
