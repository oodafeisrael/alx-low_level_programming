#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
