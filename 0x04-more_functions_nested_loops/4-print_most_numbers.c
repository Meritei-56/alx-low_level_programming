#include "main.h"
/**
 * print_most_numbers - function definition
 * Description: print numbers from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		if (digits == 2 || digits == 4)
		{
			continue;
		}
		else
		{
			_putchar(digits + '0');
		}
	}
	_putchar('\n');
}
