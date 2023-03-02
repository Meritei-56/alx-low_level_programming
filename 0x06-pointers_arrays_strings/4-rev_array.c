#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function
 * Description: reverses contents of an array of integers
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n / 2; j++)
	{
	k = a[j];
	a[j] = a[n - 1 - j];
	a[n - 1 - j] = k;
	}
}
