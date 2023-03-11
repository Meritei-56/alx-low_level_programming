#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function definition
 * Description: copies string
 * @dest: buffer
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
	dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
