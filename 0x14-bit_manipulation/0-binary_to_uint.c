#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* binary_to_uint - this function converts binary number to an unsigned integer
* @b: the string to be converted
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num, k;

	if (!b || !*b)
	{
		return (0);
	}
	dec_num = k = 0;
	while (b[k])
	{
		if (b[k] > 49)
		{
			return (0);
		}
		else if (b[k] == 49)
		{
			dec_num <<= 1;
			dec_num += 1;
		}
		else
			dec_num <<= 1;
		k++;
	}
	return (dec_num);
}
