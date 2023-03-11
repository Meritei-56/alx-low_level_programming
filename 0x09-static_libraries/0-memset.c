#include "main.h"
#include <stdio.h>
/**
 * _memset - function definition
 * Description: fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: first bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}

