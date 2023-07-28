#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: The linked list
 * Return: elements (number of elements in the list)
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++, h = h->next)
		;
	return (elements);
}
