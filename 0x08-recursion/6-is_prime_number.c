#include "main.h"

/**
 * is_prime_number - Checks given number is a primer number
 * @n: is the given number
 *
 * Return: 1 if number is prime
 * else: returns 0 if number is not prime
 *
 **/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n % 2 == 0)
		return (0);

	return (_prime_recursive(n, 3));
}

/**
 * _prime_recursive - Checks number is prime recursively
 * @n: is the given number
 * @i: number given to test divisibility
 *
 * Return: 0 if number is prime
 * else: return 1
 *
 **/

int _prime_recursive(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_prime_recursive(n, i + 2));
}
