#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: the head of the list
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t length;
	const list_t *head = h;

	length = 0;
	if (!h)
		return (0);
	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", head->len, head->str);
		length++;
		head = head->next;
	}

	return (length);
}
