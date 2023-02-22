#include "main.h"

/**
 * determine last digits of numbers
 *
 * print_last_digit: program to check last digits
 *
 * @m: the integer to be computed
 * @n: last digit
 * Return: last digit value
 */

int print_last_digit(int m)
{
	int n = m % 10;

	if (n < 0)
		n = -1;

	_putchar(n + '0');

	return (0);
}
