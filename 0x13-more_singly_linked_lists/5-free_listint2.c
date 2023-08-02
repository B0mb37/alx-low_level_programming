#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULLi
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);
		current = next_node;
	}
	*head = NULL;
}
