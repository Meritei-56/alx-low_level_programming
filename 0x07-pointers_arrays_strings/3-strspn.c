#include "main.h"
#include <stdio.h>
/**
 * _strspn - function definition
 * Description: determines the length of a prefix string
 * @s: string
 * @accept: prefix string
 * Return: bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
