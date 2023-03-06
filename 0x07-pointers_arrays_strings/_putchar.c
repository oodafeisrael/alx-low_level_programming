#include <unistd.h>
/**
* _putchar - write character cto stdout
* @c: the character to print
* Return 1 if true, 0if false
* on error, -1 return
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
