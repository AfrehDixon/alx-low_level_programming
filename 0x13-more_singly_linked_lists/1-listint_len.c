#include "lists.h"

/**
 * listint_len - returns the number of items in a linked lists
 * @h: linked list of type listint_t *h
 *
 * Return: number of nodes of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t alpha = 0;

	while (h)
	{
		alpha++;
		h = h->next;
	}

	return (alpha);
}

