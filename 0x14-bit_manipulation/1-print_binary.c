#include "main.h"

/**
 * print_binary - function definition
 * Description: prints binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j = 0;
	unsigned long int bna;

	bna = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (bna != 0)
	{
	if (n & bna)
	{
	putchar('1');
	j = 1;
	}
	else if (j)
	{
	putchar('0');
	}
	bna >>= 1;
	}
	if (j == 0)
	{
	putchar('0');
	}
}

