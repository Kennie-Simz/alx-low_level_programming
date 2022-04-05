#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: input pointer of the string to split
 * Return: A pointer to an array of strings, NULL if str == NULL,
 * or str == "" (empty), and NULL if function fails
 *
 **/

char **strtow(char *str)
{
	char **array;
	int i = 0, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
			((str[i + 1] == ' ' || str[i + 1] == '\t) || str[i + 1] == '\n'))
			count++;
	}

	if (count == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (count + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0;
			j = i;

			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, len++;

			array[k] = malloc((len + 1) * sizeof(char));

			if (array[k] == NULL)
			{
				for (k = l - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}

			for (m = 0; m < len; m++, i++)
				array[k][m] = str[i];
			array[k++][m] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
