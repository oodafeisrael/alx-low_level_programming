#include "main.h"
/**
* get_endiannness - function that checks the endianness
*Return: 0 (big Endian), 1 (little Endian)
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return (*c);
}
