#include "main.h"

/**
 * print_binary - function
 * Description: prints the binary representation of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int k;
	unsigned long int bnu;

	/*to convert number to binary*/
	bnu = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (bnu != 0)
	{
	if (n & bnu)
	{
	putchar('1');
	k = 1;
	}

	else if (k)
	{
	putchar('0');
	}
	bnu >>= 1;
	}
	if (k == 0)
	{
	putchar('0');
	}

}

