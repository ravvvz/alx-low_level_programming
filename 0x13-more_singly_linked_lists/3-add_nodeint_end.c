#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the head of the list
 * @n: the element to add
 *
 * Return: head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h, *tmp;

	h = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
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
