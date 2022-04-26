#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of the linked list
 * @head: Double pointer to the actual position of the linked list (struct)
 *
 * Return: sum of the value of all the nodes
 *
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (tmp == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
