#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: the head of the list
 * @idx: the index to add it at
 * @n: the element to add
 *
 * Return: head to linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *h = NULL, *prev = NULL;
	unsigned int i;

	i = 0;
	h = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	while (h != NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}
		if (i == idx)
		{
			new->next = h;
			prev->next = new;
			return (*head);
		}
/*		if ((i + 1) == idx) */
/*		{ */
/*			new->next = NULL; */
/*			h->next = new; */
/*			return (*head); */
/*		}*/
		prev = h;
		h = h->next;
		i++;
	}
	return (NULL);
}
