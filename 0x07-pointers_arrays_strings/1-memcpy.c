#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function definition
 * Description: copies memory area
 * @src: memory area
 * @dest: memory area
 * @n: bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k;
	int j = n;

	for (k = 0; k < j; k++)
	{
		src[k] = dest[k];
		n--;
	}
	return (dest);
}
