#include "main.h"

/**
 * main - program to print times table
 * times_table: prints 9 times_table
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (z <= 9 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (z <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
