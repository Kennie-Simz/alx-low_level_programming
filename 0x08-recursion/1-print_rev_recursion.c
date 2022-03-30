#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, recursively
 * @s: string to print
 *
 **/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/*print previous characters*/
	_print_rev_recursion(s + 1);

	/*print current character*/
	_putchar(*s);
}
