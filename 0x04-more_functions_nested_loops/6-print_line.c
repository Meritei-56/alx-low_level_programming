#include "main.h"
/**
 * print_line - function used
 * Description: to print a straight line
 * @m: number of times character _ is printed
 */
void print_line(int m)
{
	int mult = 0;

	while (m > 0 && mult < m)
	{
		_putchar('_');
		mult++;
	}
	_putchar('\n');
}
