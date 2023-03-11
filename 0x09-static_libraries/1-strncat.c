#include "main.h"
#include <string.h>
/**
 * _strncat - function definition
 * Description: concatenates two strings
 * @dest: string
 * @src: string
 * @n: src bytes to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	k = 0;
	while (dest[k] != '\0')
	{
	k++;
	}

	l = 0;
	while (l < n && src[l] != '\0')
	{
	dest[k] = src[l];
	l++;
	k++;
	}

	dest[k] = '\0';
	return (dest);
}
