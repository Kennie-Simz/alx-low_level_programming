#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars
 * @c: specific char to initialize array
 * @size: size of array to print
 * Return: Null if size = 0 or fails, else a pointer to the array
 *
 **/

char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(sizeof(char) * size);
	unsigned int i;

	if (buffer == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
