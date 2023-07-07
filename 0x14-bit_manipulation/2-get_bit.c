#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
* get_bit - this function returns the value of a bit at a given index
* @n: number to scan
* @index: bit to return
* Return: Bit value 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
	{
		return (-1);
	}
	bit_num = (n >> index) & 1;
	return (bit_num);
}
