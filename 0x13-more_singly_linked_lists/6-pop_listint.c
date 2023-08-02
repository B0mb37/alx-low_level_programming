#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t and returns head node's data
 * @head: pointer to linked list head
 * Return: n or 0.
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	int n = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;

	free(temp);
	return (n);
}
