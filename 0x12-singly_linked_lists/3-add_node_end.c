#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function definition
 * Description: adds a new node at end of list
 * @head: double pointer
 * @str: string
 *
 * Return: address of new string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *creat;
	list_t *t = *head;

	while (str[len])
	len++;

	creat = malloc(sizeof(list_t));
	if (!creat)
	return (NULL);

	creat->str = strdup(str);
	creat->len = len;
	creat->next = NULL;

	if (*head == NULL)
	{
	*head = creat;
	return (creat);
	}

	while (t->next)
	t = t->next;

	t->next = creat;

	return (creat);
}

