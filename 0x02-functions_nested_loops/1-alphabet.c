nclude "main.h"
/**
* print alphabet - prints the alphabet to lowercase
*/
void print_alphabet(void)
{
	char lower;
	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	_putchar('\n');
}
