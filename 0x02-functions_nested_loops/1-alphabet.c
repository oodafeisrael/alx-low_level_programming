include "main.h"
/**
* print_alphabet ->  prints the alphabet to lowercase
* Return: void
*/
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	_putchar('\n');
}
