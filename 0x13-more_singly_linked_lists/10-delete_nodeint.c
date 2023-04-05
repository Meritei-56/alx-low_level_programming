#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * Description: deletes node at index
 * @head: pointer to head of the list
 * @index: integer for the list
 *
 * Return: 1 if it succeeds and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *ptr, *nextnode = *head;

	if (nextnode == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(nextnode);
		return (1);
	}

	for (k = 0; k < (index - 1); k++)
	{
		if (nextnode->next == NULL)
			return (-1);

		nextnode = nextnode->next;
	}
	ptr = nextnode->next;
	nextnode->next = ptr->next;
	free(ptr);

	return (1);
}
