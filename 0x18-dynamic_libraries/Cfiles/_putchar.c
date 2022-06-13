#include "unistd.h"

/**
 * _putchar - prints character c to output
 * @c: character given
 *
 * Return: Always 0
 *
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
