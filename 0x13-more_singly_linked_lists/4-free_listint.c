#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of linked list
 * Retourn: void
 */
void free_listint(listint_T *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
