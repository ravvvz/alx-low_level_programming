#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: the head of the link
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head) != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
