#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t and returns head node's data
 * @head: pointer to linked list head
 * Return: n or 0.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (n);
}
