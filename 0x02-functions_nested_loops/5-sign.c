#include "main.h"

/**
 * print_sign - a function in file main.h to print sign of numbers
 *
 * parameter 'n'  - describes numbers entered for the system to print their signs
 *
 * return: Always 0, 1, or -1 (Success)
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
