#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: the list passed into the function
 * Return: size (number of nodes)
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t size = 0;

	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
