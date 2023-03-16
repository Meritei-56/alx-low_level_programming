#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function definition
 * Description: allocates a memory using malloc
 * @b: integer
 *
 * Return: str
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
	exit(98);
	}

	return (str);
}
