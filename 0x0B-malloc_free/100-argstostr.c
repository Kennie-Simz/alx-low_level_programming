#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of program
 * @ac: number of commandline arguments
 * @av: array of all arguments
 *
 * Return: pointer to resultant string, NULL if ac == 0,
 * or av == NULL, and returns NULL if it fails
 *
 **/

char *argstostr(int ac, char **av)
{
	int i, j;
	int length = 0;
	int k = 0;
	char *str;

	/* returns NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/*get the length of all the strings in av*/
	for (i = 0; i < ac; i++)
		length += _strlength(av[i]);

	/*allocate space for new string*/
	str = malloc(sizeof(char) * (length + ac + 1));
	if (str == NULL)
		return (NULL);

	/*copy all characters in every string in av to str*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		/*all argumenrs should end with a new line in the new string*/
		str[k] = '\n';
		k++;
	}

	/*end of str*/
	str[k] = '\0';
	return (str);
}

/**
 * _strlength - gets length of a string
 * @s: address of the first character in the string
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
