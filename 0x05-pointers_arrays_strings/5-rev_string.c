#include "main.h"

 int _strlen(char *s);

/**
 * rev_string - reverses a given string
 *
 * @s: address of the first character in the string
 *
 **/

void rev_string(char *s)
{
	int length = _strlen(s);
	int i, mirr_i;
	char swapped;

	/* swap elements in mirror positions */

	for (i = 0; i < (length / 2); i++)
	{
		/* getting corresponding mirror index */
		mirr_i = length - (i + 1);

		swapped = *(s + i);
		*(s + i) = *(s + mirr_i);
		*(s + mirr_i) = swapped;
	}
}

/**
 * _strlen -finds string length
 * @s: address of the first charcter in the string
 *
 * Return: length of strings
 *
 **/

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
