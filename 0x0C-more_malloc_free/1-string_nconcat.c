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
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int size = s1_length + n;
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
		size = s1_length + s2_length + 1;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	s2_length = 0;
	while (k < size)
	{
		if (k <= s1_length)
			s[k] = s1[k];
		if (k >= s1_length)
		{
			s[k] = s2[s2_length];
			s2_length++;
		}
		k++;
	}
	s[k] = '\0';

	return (s);
}

