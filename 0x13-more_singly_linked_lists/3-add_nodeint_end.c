#include "lists.h"

/**
 * add_nodeint_end - function
 * Description: adds a new node at end of list
 * @n: integer for the new node
 * @head: pointer address for the new node
 *
 * Return: NULL if it fails, others address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *add;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->next = NULL;
	ptr->n = n;

	if (*head == NULL)
		*head = ptr;
	else
	{
	add = *head;
	while (add->next != NULL)
	{
	add = add->next;
	}
	add->next = ptr;
	}

	return (*head);
}
