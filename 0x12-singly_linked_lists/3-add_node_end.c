#include "lists.h"

/**
 * add_node_end - add a new node at the end of a linked list
 * @head: head of the linked list
 * @str: string
 *
 * Return: linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h, *tmp;

	h = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (h);
}
