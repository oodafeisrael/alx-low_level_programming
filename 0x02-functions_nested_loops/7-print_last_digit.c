#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @num: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int num)
{
	int ld;

	ld = (num % 10);
	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar(ld + '0');
	return (ld);
}
