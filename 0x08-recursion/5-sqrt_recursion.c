#include "main.h"
#include <stdio.h>

int _sqrt(int n, int m);

/**
 * _sqrt_recursion - function definition
 * Description: returns squareroot of a number
 * @n: number that sqrt is determined
 *
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function to calculate natural sqrt
 * @n: integers to determine sqrt
 * @m: iterate number
 *
 * Return: natural square root
 */
int _sqrt(int n, int m)
{
	int sqroot = m * m;

	if (sqroot > n)
		return (-1);

	if (sqroot == n)
		return (m);

	return (_sqrt(n, m + 1));
}

