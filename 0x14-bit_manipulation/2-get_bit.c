#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* get_bit - this function gives the value of a bit at a given index
* @n: number to be searched
* @ index: bit index to be returned
* @ Return: the bit value 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}
	bit_value = (n >> index) & 1;
	return (bit_value);
}
