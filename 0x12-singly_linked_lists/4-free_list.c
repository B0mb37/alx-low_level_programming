#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to first node of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		nnode = head;
		head = head->next;

		free(node->str);
		free(node);
	}
}
