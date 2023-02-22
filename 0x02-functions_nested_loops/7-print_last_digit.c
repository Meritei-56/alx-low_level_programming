#include "main.h"

/**
 * determine last digits of numbers
 *
 * print_last_digit: program to check last digits
 *
 * n: the integer to be computed
 * m: last digit
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');

	return (0);
}
