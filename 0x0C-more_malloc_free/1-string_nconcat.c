#include "main.h"
#include <stdlib.h>

unsigned int _strlength(char *s)
/**
 * string_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: max number of bytes to concatenate
 *
 * if n is greater or equal to the length of s2 then use entire string s2
 * else if NULL is passed, treat it as an empty string
 *
 * Return:  A pointer to new string, else return NULL
 *
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, len_s3;
	unsigned int i, j;
	char *s3;

	len_s1 = (s1 == NULL) ? 0 : _strlength(s1);
	len_s2 = (s2 == NULL) ? 0 : _strlength(s2);
	len_s3 = len_s1 + ((n < len_s2) ? n : len_s2);

	s3 = malloc(sizeof(char) * (len_s3 + 1));

	/*see if malloc passes or fails*/
	if (s3 == NULL)
		return (NULL);

	/*copy all characters from s1*/
	for (i = 0; i < len_s1; i++)
		s3[i] = s1[i];

	/*copy max n bytes from s2*/
	for (j = 0; (j < n) && (j < len_s2); j++, i++)
		s3[i] = s2[j];

	/*terminate s3*/
	s3[i] = '\0';

	return (s3);
}

/**
 *
 * _strlength - finds the length of a string
 * @s: address of first character in the string
 *
 * Return: length og the string
 *
 **/

unsigned int _strlength(char *s)
{
	unsigned int length = 0;
	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
