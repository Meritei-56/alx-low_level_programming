#include "main.h"
#include <stdio.h>
/**
 * _strstr - function definition
 * Description: locates a substring
 * @needle: substring
 * @haystack: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *l = needle;

		while (*k == *l && *l != '\0')
		{
			k++;
			l++;
		}
		if (*l == '\0')
		return (haystack);
	}
	return (NULL);
}
