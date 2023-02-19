#include <stdio.h>
#include <stdlib.h>
/**
 * main - To print alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
{
		putchar(low);
}
putchar('\n');
return (0);
}
