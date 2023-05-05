#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_binary - this function prints binary representation of a number
* @n: Number to be converted to binary
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
