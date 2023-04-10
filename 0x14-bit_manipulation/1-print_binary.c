#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_binary - this prints binary equivalent of a given decimal number
* @n: value to be printed in binary
*/
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
