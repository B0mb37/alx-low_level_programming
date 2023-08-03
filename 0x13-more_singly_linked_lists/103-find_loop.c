#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head node of linked list
 * Return: NULL or fast
 */
listint_t *find_listint_lop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head->next;

	if (head == NULL || head->next == NULL)
		return (NULL);
	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		if (fast != NULL)
			fast = fast->next;
	}
	return (NULL);
}

