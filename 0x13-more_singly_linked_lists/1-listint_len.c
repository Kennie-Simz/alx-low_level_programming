#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elemens in a linked listint_t list
 * @h: Pointer of the first node
 *
 * Return: Always 0
 *
 **/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;

		count++;
	}
	return (count);
}
