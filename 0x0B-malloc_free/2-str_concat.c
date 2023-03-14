#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * Description: function to concatenate strings
 * @s1: string
 * @s2: string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0, j = 0, m = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
	i++;
	}
	while (s2[j])
	{
	j++;
	}

	len = i + j;
	c = malloc((sizeof(char) * len) + 1);

	if (c == NULL)
	return (NULL);

	j = 0;
	while (m < len)
	{
	if (m <= i)
	c[m] = s1[m];
	if (m >= i)
	{
	c[m] = s2[j];
	j++;
	}
	m++;
	}

	c[m] = '\0';

	return (c);
}

