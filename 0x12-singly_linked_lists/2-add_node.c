#include "lists.h"
#include <string.h>
#include <stdlib.h>

char *_strdup(const char *str);

/**
 * add_node - func that adds new node at beginning of  a list
 * @head: Lined list to be changed
 * @str: string to be added to node
 * Return: newNode (address of list)
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL && str != NULL)
	{
		list_t *newNode = malloc(sizeof(list_t));

		if (newNode == NULL)
			return (NULL);
		newNode->str = _strdup(str);

		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(str);/*Lem of duplicate string*/
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	return (NULL);
}

/**
 * _strdup - duplicates string in dynamic memory
 * @str: string to be duplicated
 * Return: duplicate (pointer to duplicated string) or NULL
 */

char *_strdup(const char *str)
{
	if (str == NULL)
		return (NULL);

	size_t length = strlen(str);
	char *duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str);
	return (duplicate);
}

