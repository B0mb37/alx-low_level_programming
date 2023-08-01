#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: the list fuct taes in
 * Return: size (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t size = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;

		size++;
	}
	return (size);
}
