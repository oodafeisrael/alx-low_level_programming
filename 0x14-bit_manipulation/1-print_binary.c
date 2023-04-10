#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_binary - this prints binary equivalent of a given decimal number
* @n: number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int current_value;

	for (j = 63; j >= 0; j--)
	{
		current_value = n >> 1;
		if (current_value & 1)
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
