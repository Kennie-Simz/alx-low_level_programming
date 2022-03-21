#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: address of first character in the string
 *
 * Returns: a reversed string
 *
 **/

void print_rev_rec(char *s);

void print_rev(char *s)
{
	/*using recursive */
	print_rev_rec(s);

	_putchar('\n');
}

/**
 * print_rev_rec - prints a string in reverse, recursively
 * @s: address of first character in the string
 *
 **/

void print_rev_rec(char *s)
{
	if (*s == '\0')
	{
		/*if current character is NULL then do nothing and return*/
		return;
	}
	else
	{
		/*print the next charactr in the string*/
		print_rev_rec(s + 1);
	}

	/*print the current character*/
	_putchar(*s);
}
