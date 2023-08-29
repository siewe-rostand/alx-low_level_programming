#include "lists.h"

/**
 * print_listint - print all elements of listint_t
 *
 * @h: param
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		len++;
	}

	return (len);
}

