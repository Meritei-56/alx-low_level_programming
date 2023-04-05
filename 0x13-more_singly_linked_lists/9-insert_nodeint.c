#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * Description: adds a node at a specific position
 * @idx: point where  new node is to be added
 * @head: pointer to head of a list
 * @n: integer for the new list
 *
 * Return: NULL if it fails, otherwise address of new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int link;
	listint_t *pos, *ptr = *head;

	pos = malloc(sizeof(listint_t));
	if (pos == NULL)
	{
		return (NULL);
	}
	pos->n = n;

	if (idx == 0)
	{
	pos->next = ptr;
	*head = pos;
	return (pos);
	}

	for (link = 0; link < (idx - 1); link++)
	{
	if (ptr == NULL || ptr->next == NULL)
		return (NULL);

	ptr = ptr->next;
	}

	pos->next = ptr->next;
	ptr->next = pos;

	return (pos);
}

