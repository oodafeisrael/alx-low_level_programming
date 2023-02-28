#include "main.h"
#include <string.h>
/**
* print_rev - Prints a string in reverse.
* @s: The string to be printed.
*/
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\n')
		n++;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
