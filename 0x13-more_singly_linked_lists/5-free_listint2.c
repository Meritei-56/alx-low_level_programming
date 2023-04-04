#include "lists.h"

/**
 * free_listint2 - function definition
 * Description: frees a list
 * @head: pointer to the list to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *st;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
	st = (*head)->next;
	free(*head);
	*head = st;
	}

	head = NULL;
}
