#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function
 * Description: returns number of elements in linked list
 * @h: pointer to list_t list
 *
 * Return: number of elemts
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
	j++;
	h = h->next;
	}
	return (j);
}
