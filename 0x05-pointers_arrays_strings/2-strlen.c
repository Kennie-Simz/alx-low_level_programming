#include "main.h"

/**
 * _strlen - Finds the length of a given string
 * @s: address of first character in the string
 *
 * Return: length of the string
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
