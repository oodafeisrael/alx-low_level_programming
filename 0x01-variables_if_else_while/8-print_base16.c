#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char alpha;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
{
	putchar(alpha);
}
	putchar('\n');
	return (0);
}
