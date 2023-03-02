#include "main.h"
#include <string.h>
/**
 * _strcmp - function definition
 * Description: compares two strings
 * @s1: input string
 * @s2: input string
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int k;

       	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
	k++;
	}
	if (s1[k] == s2[k])
	{
	k++;
	}

	else
	{
	return (s1[k] - s2[k]);
	}
	k++;

	return (0);
}

