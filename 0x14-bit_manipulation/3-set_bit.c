#include "main.h"
#include <stdio.h>
/**
* set_bit - sets a bit at agiven index to 1
* @n: pointer to the number to be changed
* @index: this is the index of the bit to set to 1
* Return: 1 on success, -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
