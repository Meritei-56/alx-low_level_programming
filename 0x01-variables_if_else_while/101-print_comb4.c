#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program to print different combinations of three digits
 * only the smallest combinations to be printed
 * only putchar function to be used
 * putchar function to be used 6 times maximum
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n, l;

	for (m = '0'; m < '9'; m++)
	{
	for (n = m + 1; n <= '9'; n++)
	{
	for (l = n + 1; l <= '9'; l++)
	{
	if (m != n && m != l && n != l)
	{
	putchar(m);
	putchar(n);
	putchar(l);
	if (m == '7' && n == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
