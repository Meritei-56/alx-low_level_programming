#include "lists.h"

/**
 * listint_len - function
 * Description: prints number of elements
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}

	return (count);

}