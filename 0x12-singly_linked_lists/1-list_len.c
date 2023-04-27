#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: the head oof linked list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int len;

	len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
