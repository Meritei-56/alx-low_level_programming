#include "main.h"
/**
 * print_numbers - function definition
 * Description: prints digits 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		_putchar(nums + '0');
	}
	_putchar('\n');
}
