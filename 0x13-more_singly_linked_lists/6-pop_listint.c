#include "lists.h"

/**
 * pop_listint - pop the first element off the list
 * @head: the head of the list
 *
 * Return: the element
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
