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
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		src[k] = dest[k];
	}
	return (dest);
}
