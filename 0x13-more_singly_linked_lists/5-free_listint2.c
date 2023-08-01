#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULLi
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *curent = *head;

	while (*head != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}
