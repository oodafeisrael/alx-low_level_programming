#include "main.h"
/**
* print_square - Prints a square using the character #.
* @size: The size of the square.
*/
void print_square(int size)
{
	int ht, width;

	if (size > 0)
	{
		for (ht = 0; ht < size; ht++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			if (ht == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
