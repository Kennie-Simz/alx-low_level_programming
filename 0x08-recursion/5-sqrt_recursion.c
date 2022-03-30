#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: is the number
 *
 * Return: 1 if the number has a natural square root
 * else: should return -1 if number doesn't have a natural square root
 *
 **/

int _sqrt_recursion(int n)
{
	return (sqrt_linear(n, 0));
}

/**
 * sqrt_linear - calculates square root recursively using linear search
 * @n: number to be worked on for square root calculation
 * @namba: random number to check the square root
 *
 * Return: natural square root of n
 * else: should return -1 if number doesn't have a square root
 **/

int sqrt_linear(int n, int namba)
{
	int square = namba * namba;

	if (square == n)
		return (namba);
	else if (square > n)
		return (-1);
	else
		return (sqrt_linear(n, namba + 1));
}
