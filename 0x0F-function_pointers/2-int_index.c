#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function
 * Description: searches for an integer
 * @size: number of elements
 * @array: array of pointers
 * @cmp: pointer to a function
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
		while (n < size)
		{
			if (cmp(array[n]))
				return (n);
			n++;
		}
		}
	}

	return (-1);
}
