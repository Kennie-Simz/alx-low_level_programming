#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 on success
 * Return: -1 on error, with errno set appropriately
 *
 **/

int _putchar(char c)
{
	return(write(1, &c, 1);
}
