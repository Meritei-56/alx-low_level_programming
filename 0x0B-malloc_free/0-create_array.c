#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates char arrays
 * Description: creates an array of chars
 * @size: array size
 * @c: char to occupy the array
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int n;

	if (size == 0)
	{
	return (NULL);
	}

	m = malloc(size * sizeof(char));
	if (m == NULL)
	{
	return (NULL);
	}

	for (n = 0; n < size; n++)
	{
	m[n] = c;
	}
	return (m);
}
