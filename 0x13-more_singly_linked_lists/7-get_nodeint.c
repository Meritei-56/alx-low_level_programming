#include "lists.h"

/**
 * get_nodeint_at_index - function
 * Description: returns nth node
 * @head: pointer to the list
 * @index: integer for the list
 *
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *cur = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (cur != NULL)
	{
	if (count == index)
		return (cur);
	count++;
	cur = cur->next;
	}

	return (head);

}
