#include "main.h"
#include <stdio.h>
/**
* clear_bit - this function sets the value of a bit to ) at a given index
* @n: pointer to number that needs to be changed
* @index: represents index value to set bit to 0
* Return: 1 on success or -1 on error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if ((*n >> index) & 1)
	{
		*n = 1 << index;
		return (1);
	}
	return (1);
}
