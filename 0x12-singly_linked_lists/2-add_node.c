#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: the head of the linked list
 * @str: element to add
 *
 * Return: node head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (*head);
}
