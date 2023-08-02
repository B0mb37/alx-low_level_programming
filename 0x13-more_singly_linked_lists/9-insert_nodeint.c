#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of head
 * @idx: index of list where new node to be added
 * @n: the value of new node
 * Return: address or Null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *temp;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		temp = *head;
		for (i = 0; temp != NULL && i < idx - 1; i++)
			temp = temp->next;
		if (temp == NULL || temp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
