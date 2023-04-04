#include "lists.h"

/**
 * add_nodeint - function
 * Description: adds new node
 * @n: new node integer
 * @head: pointer to address of the node added
 *
 * Return: address to node addressed
 * or NULL if function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}

