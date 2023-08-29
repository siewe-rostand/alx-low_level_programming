#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		h = h->next;
		node_len++;
	}

	return (node_len);
}
