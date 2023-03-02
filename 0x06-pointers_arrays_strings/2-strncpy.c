#include "main.h"
#include <string.h>
/**
 * _strncpy - function definition
 * Description: copies a string
 * @dest: string
 * @src: string
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[m] = src[m];
	m++;
	}
	while (m < n)
	{
	dest[m] = '\0';
	m++;
	}
	return (dest);
}
