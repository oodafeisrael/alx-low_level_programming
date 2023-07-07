#include "main.h"
#include <stdio.h>
/**
* print_binary - function that prints binary representation of a number
* @n:number to be converted to binary equivalent
*/
void print_binary(unsigned long int n)
{
	int x;
	int count = 0;
	unsigned long int init_value;

	for (x = 63; x >= 0; x--)
	{
		init_value = n >> x;
		if (init_value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
