#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function definition
 * Description: perfoms addition
 * @a: integer
 * @b: integer
 * Return: ..
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function
 * Description - finds difference of two ints
 * @a: ..
 * @b: ..
 *
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function
 * Description: product of two ints
 * @a: ..
 * @b: ..
 *
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function
 * Description - divides integers
 * @a: ..
 * @b: ..
 *
 * Return: ..
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - function
 * Description: provides modulus
 * @a: ..
 * @b: ..
 *
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

