#include "lists.h"

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->str = strdup(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = i;
	n_node->next = *head;

	*head = n_node;

	return (*head);
}
