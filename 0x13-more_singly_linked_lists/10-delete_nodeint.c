#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: pointer to linked list head pointer
 * @index: index of node to be deleted
 * Return: 1 (succeeded) or -1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	prev = NULL;
	count = 0;

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;

	free(current);
	return (1);
}
