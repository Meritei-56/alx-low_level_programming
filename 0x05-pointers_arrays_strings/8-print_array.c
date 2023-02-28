#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * Description: prints n elements of an array
 * @a: array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d\n", a[i]);
	}
}
