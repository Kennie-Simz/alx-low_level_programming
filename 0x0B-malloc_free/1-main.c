#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for ALX school students
 *
 * Return: Always 0
 *
 **/

int main(void)
{
	char *s;

	s = _strdup("Holberton");
	if (s == NULL)
	{
		printf("failed to allocate memory");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
