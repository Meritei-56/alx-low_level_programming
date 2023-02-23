#include "main.h"
#include <stdio.h>
/**
 * print_number - function definition
 * Description- prints an integer
 * @m: integer
 */
void print_number(int m)
{
	unsigned int digit;

	if (m < 0)
	{
		digit = -m;
		_putchar('-');
	}
	else
	{
		digit = m;
	}

	if (digit / 10)
	{
		print_number(digit / 10);
	}
	_putchar ((digit % 10) + '0');
}

