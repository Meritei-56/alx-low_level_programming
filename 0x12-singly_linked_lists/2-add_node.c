#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function definition
 * Description: adds a new node at beginning of a list
 * @head: double pointer to list
 * @str: string
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *m;

	while (str[len])
	len++;

	m = malloc(sizeof(list_t));
	if (!m)
	return (NULL);

	m->str = strdup(str);
	m->len = len;
	m->next = (*head);
	(*head) = m;

	return (*head);
}
