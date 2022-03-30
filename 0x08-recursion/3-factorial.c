#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: as the given number
 *
 * Return: factorial of n
 * OR: -1 if n is negative
 *
 **/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
