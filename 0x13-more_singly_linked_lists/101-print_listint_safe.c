#include "lists.h"

/**
 * print_listint_safe - prints a lnked listint_t list
 * @head: pointer to listint list head
 * Return: nodes (node count)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		nodes++;
		printf("%d\n", current->n);
		current = current->next;

		if (current == head)
			exit(98);
	}
	return (nodes);
}
