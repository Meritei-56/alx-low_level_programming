#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - function definition
 * @dest: buffer
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + 1) != '\0')
	{
	m++;
	}
	for ( ; n < 1; n++)
	{
	dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
