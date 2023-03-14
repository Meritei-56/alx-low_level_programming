#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space
 * Description: returns a pointer to a new string
 * @str: string
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *m;
	int k = 1;
	int n = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[k])
	{
	k++;
	}

	m = malloc((sizeof(char) * k) + 1);
	if (m == NULL)
	{
	return (NULL);
	}
	while (n < k)
	{
	m[n] = str[n];
	n++;
	}
	m[n] = '\0';

	return (m);
}
