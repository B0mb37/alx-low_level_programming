#include "lists.h"

/**
 * add_node_end - func that vadds a new node at the end of a list
 * @head: the linked listr to be appended
 * @str: the string to be appended
 * Return: element (address of new element) or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str != NULL)
	{
		list_t *element = malloc(sizeof(list_t));

		if (element == NULL)
			return (NULL);

		element->str = _strdup(str);
		element->len = strlen(str);
		element->next = NULL;

		if (*head == NULL)
			*head = element;
		else
		{
			list_t *newNode = *head;

			while (newNode->next)
				newNode = newNode->next;
			newNode->next = element;
		}
		return (element);
	}
	return (NULL);
}
