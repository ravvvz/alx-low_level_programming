#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of the linked list
 *
 * Return: number of the eleents
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *slow, *fast;

	i = 0;
	if (head == NULL)
		exit(98);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast < slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		fast = fast->next;
		slow = slow->next;
		i++;
		if (fast != NULL && fast < slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			fast = fast->next;
			slow = slow->next;
			i++;
		}
	}

	printf("[%p] %d\n", (void *)slow, slow->n);
	i++;

	return (i);
}
