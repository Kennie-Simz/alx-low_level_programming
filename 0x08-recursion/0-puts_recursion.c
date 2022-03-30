#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, recursively
 * @s: the string to be printed
 *
 **/

void _puts_recursion(char *s)
{
	if ((*s) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		/*print the current character*/
		_putchar(*s);

		/*print the next characters*/
		_puts_recursion(s + 1);
	}
}
