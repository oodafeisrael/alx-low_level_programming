#include "main.h"
#include <stdio.h>
/**
* get_endianness - this function checks the endianness
* Return: 0 (big endian), 1 for little endian
*/
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *)&h;

	if (*c)
	{
		return (1);
	}
	return (0);
}

