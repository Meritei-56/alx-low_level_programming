#include "lists.h"
#include <stdio.h>

/**
 * print_list - function
 * Description: prints elements of a list_t
 * @h: pointer to list_t
 *
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
	if (!h->str)
	{
	printf("[0] (nil)\n");
	}
	else
	{
	printf("[%u] %s\n", h->len, h->str);
	}
	h = h->next;
	n++;
	}

	return (n);
}
