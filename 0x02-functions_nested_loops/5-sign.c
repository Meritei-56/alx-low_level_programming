#include "main.h"

/**
 * pr_sign - create code
 * print_sign: prototype function to print sign of numbers
 *
 * @n: numbers entered for the system to print their signs
 *
 * Return: Always 1, 0 or -1 (Success)
 */

int print_sign(int n)	/* print_sign - user defined, prints sign of a number */
{
	if (n > 0)	/* n - numbers entered */
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
