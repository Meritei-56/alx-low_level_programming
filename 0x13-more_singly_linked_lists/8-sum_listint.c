#include "lists.h"

/**
 * sum_listint - function
 * Description: returns sum of data in a linked list
 * @head: pointer to the list
 *
 * Return: 0 if list is null otherwise sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
	sum = sum + head->n;
	head = head->next;
	}

	return (sum);
}
