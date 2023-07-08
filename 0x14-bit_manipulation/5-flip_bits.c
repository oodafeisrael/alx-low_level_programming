#include "main.h"
/**
* flip_bits - this functions gives the number of bits to be flipped
* as you move from one number to another
* @n: starting number
* @m: target number
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int exclusive;

	exclusive = n ^ m;
	while (exclusive)
	{
		bits += exclusive & 1;
		exclusive >>= 1;
	}
	return (bits);
}
