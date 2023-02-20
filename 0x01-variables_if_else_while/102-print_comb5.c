#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print combinations of two two-digit numbers
 * The two numbers are separated by space
 * putchar function is used
 * putchar is used 8 times maximum
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 98; m++)
	{

	for (n = 0; n <= 99; n++)
	{
	putchar((m / 10) + '0');
	putchar((m % 10) + '0');
	putchar(' ');
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');

	if (m == 98 && n == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
