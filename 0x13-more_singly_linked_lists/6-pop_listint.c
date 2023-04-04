#include "lists.h"

/**
 * pop_listint - function
 * Description: deletes head node of a list
 * @head: pointer to the list to be deleted
 *
 * Return: 0 if list is empty, otherwise head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
	{
	return (0);
	}

	else
	{
	ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	}
	free(ptr);

	return (data);
}
