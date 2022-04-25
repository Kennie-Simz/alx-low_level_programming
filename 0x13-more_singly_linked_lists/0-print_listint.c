#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print out list of elements
 * @h: Head node
 *
 * Return: Size of the list or -1 on error
 *
 **/

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
