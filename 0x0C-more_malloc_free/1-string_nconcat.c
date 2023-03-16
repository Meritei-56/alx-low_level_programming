#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function definition
 * Description: concatenates two strings
 * @s1: string
 * @s2: string
 * @n: first bytes of s2
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = strlen(s1);
	unsigned int s2_length = strlen(s2);
	unsigned int size = s1_length + n + 1;
	char *s;
	unsigned int k = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_length])
		s1_length++;
	while (s2[s2_length])
		s2_length++;

	if (n >= s2_length)
	{
	size = s1_length + s2_length + 1;
	s1_length++;
	s2_length++;
	}

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
	return (NULL);
	}
	for (k = 0; k < s1_length; k++)
	{
	s[k] = s1[k];
	}
	for (k = 0; k < s2_length; k++)
	{
	s[s1_length + k] = s2[k];
	}

	s[size - 1] = '\0';

	return (s);
}

