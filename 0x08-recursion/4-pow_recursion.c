#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: is the number
 * @y: is the number power of x
 *
 * Return: final value after power computation
 * else: if y is lower than 0, returns -1
 *
 **/

int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
