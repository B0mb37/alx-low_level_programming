#include "lists.h"

/**
 * reverse_listint - reverses a listint list
 * @head: pointer to pointer of first node of listint_t list
 * Return: head (pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
