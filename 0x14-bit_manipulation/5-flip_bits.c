#include "main.h"
#include <stdio.h>
/**
* flip_bits - this function gives the number of bits to be flipped
* to get from one number to another
* @n: start number
* @m: end number
* Return: number of bits changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int curr_bits = 0;
	unsigned long int xor;

	xor = n ^ m;
	while (xor)
	{
		curr_bits += xor & 1;
		xor >>= 1;
	}
	return (curr_bits);
}
