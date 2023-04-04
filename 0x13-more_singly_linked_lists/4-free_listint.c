#include "lists.h"

/**
 * free_listint - function definition
 * Description: frees a list
 * @head: pointer to the list to be freed
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *st;

	while (head != NULL)
	{
	st = head->next;
	free(head);
	head = st;
	}
}
