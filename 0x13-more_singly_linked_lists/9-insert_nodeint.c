#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a pos
 * @head: the head of the linked list
 * @idx: the index to add the node at
 * @n: the element to add
 *
 * Return: the head to the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *h = NULL, *prev = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	h = *head;
	i = 0;
	while (h != NULL)
	{
		if (i == idx)
		{
			new->next = h;
			prev->next = new;
			return (*head);
		}
		if ((i + 1) == idx && h->next == NULL)
		{
			new->next = NULL;
			h->next = new;
			return (*head);
		}
		prev = h;
		h = h->next;
		i++;
	}
	if (idx > i)
	{
		return (NULL);
	}

	return (*head);
}
