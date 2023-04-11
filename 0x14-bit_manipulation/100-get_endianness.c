#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_endiannes - this checks for little or big machine
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
	unsigned int d;
	char *c;

	d = 1;
	c = (char *) &d;
	return ((int)*c);
}
