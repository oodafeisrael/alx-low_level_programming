#include "main.h"
/**
* print_alphabet_x10 -> print 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	char lower;
	int count = 0;

	while(count++ <= 9)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
_putchar('\n');
}

