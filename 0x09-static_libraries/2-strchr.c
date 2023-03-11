#include "main.h"
#include <stdio.h>
/**
 * _strchr - function definition
 * Description: locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: value of character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
