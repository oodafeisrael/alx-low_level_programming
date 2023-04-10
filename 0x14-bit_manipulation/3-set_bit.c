#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* set_bit - sets a bit with a given index to 1
* @n: pointer to the number (unsigned long int) to be changed
@index: bit's index
* Return: 1 if success, -1 if it  fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);
	k = 1 << index;
	*n = (*n | k);
	return (1);
}
