#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nl;

	nl = malloc(sizeof(nl));

	if (nl == NULL)
		return NULL;

	nl->n = n;
	nl->next = *head;

	*head = nl;

	return (*head);
}
