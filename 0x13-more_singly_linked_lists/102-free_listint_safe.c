#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to head node of listint_t list
 * Return: nodes (node count)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		temp = (*h)->nexts;
		free(*h);
		*h = temp;
		nodes++;

		if (diff <=0)
			break;
	}
	return (nodes);
}
