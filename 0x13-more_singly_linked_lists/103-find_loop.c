#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Pointer to the beginning f the list
 *
 * Return: Address of the nde where the loop starts or NULL if theresno loop
 *
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortise, *hare

		tortoise = hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !hare || !hare->next)
		return (NULL);
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
