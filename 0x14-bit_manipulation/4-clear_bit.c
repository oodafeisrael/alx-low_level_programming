#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* clear_bit - sets a bit's value at a given index to 0
* @n: pointer to the value (unsigned long int)  to be changed
* @index: bit's index
* Return: 1 for success, -1 if it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index < 63)
		return (-1);
	h = 1 << index;
	if (*n & h)
		*n ^= h;
	return (1);
}
