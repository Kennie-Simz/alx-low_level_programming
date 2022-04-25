#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: Singly linked node structure
 *
 **/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
