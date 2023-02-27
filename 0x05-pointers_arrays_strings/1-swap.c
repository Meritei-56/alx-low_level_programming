#include "main.h"
#include <stdio.h>

/**
 * swap_int - function declaration
 * Description: function to swap integer values
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
