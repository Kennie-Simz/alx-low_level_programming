nclude "main.h"


/**
 * *_memset - checks for uppercase character
 * @s: character to be checked
 * @b: random parameter
 * @n: extra random parameter
 *
 * Return: 1 if c is uppercase. 0 otherwise.
 *
 **/

int *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
