#include "lists.h"

/**
 * print_listint - function definition
 * Description: prints elements of a list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t data = 0;


	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	data++;
	}

	return (data);
}

