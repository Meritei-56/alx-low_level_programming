#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function
 * Description: executes a function
 * @array: array
 * @size: array size
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (m < size)
		{
		action(array[m]);
		m++;
		}
	}
}
