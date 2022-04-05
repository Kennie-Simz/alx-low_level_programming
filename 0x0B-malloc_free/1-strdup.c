#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated spac in memory
 * @str: copy of string given as a parameter
 * Return: NULL if str = NULL or insufficient memory,
 * else on success, a pointer to duplicated string
 *
 **/

char *_strdup(char *str)
{
	char *dup_str;
	int len_str;
	int i;


	if (str == NULL)
		return (NULL);

	len_str = _strlength(str);
	dup_str = malloc(sizeof(char) * (len_str + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
		dup_str[i] = str[i];

	dup_str[len_str] = '\0';
	return (dup_str);
}

/**
 * _strlength - finds the length of a string
 * @s: address of first character in the string
 *
 * Return: length of the string
 *
 **/

int _strlength(char *s)
{
	int length = 0;

	while(*s)
	{
		length++;
		s++;
	}
	return (length);
}
