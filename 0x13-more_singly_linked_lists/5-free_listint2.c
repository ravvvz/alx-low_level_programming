#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: the head of the link
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	if (*head == NULL)
		*head = NULL;
	h = *head;
	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	*head = NULL;
}
