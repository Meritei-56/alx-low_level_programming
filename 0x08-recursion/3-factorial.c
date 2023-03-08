#include "main.h"
#include <stdio.h>
/**
 * factorial - function definition
 * Description: returns factorial of a number
 * @n: number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 0)
		return (n * factorial(n - 1));

	return (0);
}

