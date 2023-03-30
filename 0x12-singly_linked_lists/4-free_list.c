#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function
 * Description: frees a list_t list
 * @head: freed list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
	t = head->next;
	free(head->str);
	free(head);
	head = t;
	}
}

