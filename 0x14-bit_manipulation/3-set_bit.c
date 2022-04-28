#include "main.h"

/**
 * set_bit - sets the value of abit to 1 at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1if it works, and -1 on error
 *
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
