#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	_putchar('A');
	_putchar('l');
	_putchar('x');
	_putchar('\n');

	int r;

	r = _islower('H');
	_putchar(r);
	_putchar('\n');

	_isalpha('H');
	_putchar(r + 'o');
	_putchar('\n');

	r = _abs(-1);
	printf("%d\n", r);

	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	 c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));

	char *str;
	int len;

	str = "My Dyn Lib";
	len = _strlen(str);
	printf("%d\n", len);

	str = "i do not fear programming";
	_puts(str);

	char s1[95];
	char *ptr; 

	ptr = _strcpy(s1, "first, solve the problem\n");
	printf("%s", s1);
	printf("%s", ptr);

	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);

	char s3[98] = "C Programming";
	char s4[] = "is very exciting\n";
	char *ptr1;

	printf("%s\n", s3);
	printf("%s\n", s4);
	printf("%s\n", _strcat(s3, s4));

	ptr1 = _strncat(s3, s4, 1);
	printf("%s\n", s3);
	printf("%s\n", s4);

	printf("%s\n", ptr1);
}
