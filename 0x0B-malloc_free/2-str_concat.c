#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Pointer pointing to s1 & s2 contents with null terminated,
 * treat NULL as an empty string, and return NULL on failure
 *
 **/

char *str_concat(char *s1, char *s2)
{
	int length_s1;
	int length_s2;
	int i;
	int j = 0;
	char *s3;

	length_s1 = (s1 == NULL) ? 0 : _strlength(s1);
	length_s2 = (s2 == NULL) ? 0 : _strlength(s2);

	s3 = malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++, j++)
		s3[j] = s1[i];

	for (i = 0; i < length_s2; i++, j++)
		s3[j] = s2[i];

	s3[j] = '\0';

	return (s3);
}

/**
 * _strlength - finds length of a string
 * @s: address of first character in the string
 *
 * Return: length of string
 *
 **/

int _strlength(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
