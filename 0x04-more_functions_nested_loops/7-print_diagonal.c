#include "main.h"
/**
* print_diagonal - Draws a diagonal line using the \ character.
* @n: The number of \ characters to be printed.
*/
void print_diagonal(int n)
{
	int h, space;

	if (n > 0)
	{
		for (h = 0; h < n; h++)
		{
			for (space = 0; space < h; space++)
				_putchar(' ');
			_putchar('\\');
			if (h == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
