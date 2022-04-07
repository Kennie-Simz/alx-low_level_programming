#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer allocated with memory
 *
 * Return: A pointer to allocated memory
 * else on fail, terminate process normally with status value 98
 *
 **/

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	//check if malloc fails
	if (mem == NULL)
		exit(98);

	return (mem);
}
