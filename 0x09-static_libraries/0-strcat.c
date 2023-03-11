#include "main.h"
#include <string.h>
/**
 * _strcat - function definition
 * Description: concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l, j;

	l = 0;
	while (dest[l] != '\0')
	{
	l++;
	}

	j = 0;
	while (src[j] != '\0')
	{
	dest[l] = src[j];
	j++;
	l++;
	}

	dest[l] = '\0';
	return (dest);
}
