#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* get_bit - returns bit's value at a given index of a decimal number
* @n: input value (unsigned long int)
* @index: bit's index
* Return: bit's value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	if (n == 0 && index < 64)
		return (0);
	for (p = 0; p <= 63; n >>= 1, p++)
	{
		if (index == p)
		{
			return (n & 1);
		}
	}
	return (1);
}
