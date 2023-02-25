#include "main.h"
/**
* print_line - Draws a straight line using the character _.
* @n: The number of _ characters to be printed.
*/
void print_line(int n)
{
	int g;

	if (n > 0)
	{
		for (g = 0; g < n; g++)
			_putchar('_');
	}
	_putchar('\n');
}
