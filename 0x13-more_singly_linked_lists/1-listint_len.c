#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the linked list
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
