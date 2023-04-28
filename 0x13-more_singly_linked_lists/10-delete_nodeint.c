#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at an index
 * @head: the head of the linked list
 * @index: the position of element to delete
 *
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *prev, *next, *tmp;
	unsigned int i;

	i = 0;
	prev = NULL;
	tmp = NULL;
	h = *head;

	while (h != NULL)
	{
		if (index == 0)
		{
			prev = *head;
			*head = (*head)->next;
			free(prev);
			return (1);
		}

		if (i == index)
		{
			next = h->next;
			tmp = h;
			prev->next = next;
			free(tmp);
			return (1);
		}
		prev = h;
		h = h->next;
		i++;
	}

	return (-1);
}
