#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULLi
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;

		*head = (*head)->next
			free(temp);
	}
	*head = NULL;
}
