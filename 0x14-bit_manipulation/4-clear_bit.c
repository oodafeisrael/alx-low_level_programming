#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 ar a given index
* @n: pointer to anumber
* @index: index of the bit to be cleared
* Return: 1 on success else -1 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
