#include <unistd.h>

/**
 * _putchar: Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1
 * On error, should return -1, and errno is set appropriately
 **/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
