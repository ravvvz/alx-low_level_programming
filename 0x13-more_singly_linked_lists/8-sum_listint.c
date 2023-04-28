#include "lists.h"

/**
 * sum_listint - sums all element in the linked list
 * @head: the head of list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
