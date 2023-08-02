#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint list
 * @head: pointer of head node
 * @index: the nth
 * Return: current (nth node value)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	
	return (current);
}
