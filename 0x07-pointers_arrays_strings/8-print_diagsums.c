#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function definition
 * Description: prints sum of two square diagonals
 * @a: array
 * @size: size of the diagonal
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
