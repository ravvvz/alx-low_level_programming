#include "lists.h"

/**
 * get_nodeint_at_index - returns the element at index
 * @head: the head of the linked list
 * @index: the index of the element to be returned
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i;

	i = 0;
	h = head;

	while (h != NULL)
	{
		if (i == index)
		{
			return (h);
		}
		h = h->next;
		i++;
	}

	return (NULL);
}
