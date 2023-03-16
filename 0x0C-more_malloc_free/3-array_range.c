#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function definition
 * Description: creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *n = 0;
	int m = 0;

	if (min > max)
	{
	return (NULL);
	}

	n = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (n == NULL)
	{
	return (NULL);
	}

	while (min <= max)
	{
	n[m] = min;
	m++;
	min++;
	}

	return (n);
}
