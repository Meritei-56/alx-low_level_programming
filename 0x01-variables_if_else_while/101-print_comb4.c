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
	int m,n,o;

	for (m = '0'; m < '9'; m++)
	{
	for (n = m + 1; n <= '9'; n++)
	{
	for (o = n + 1; 0 <= '9'; o++)
	{
	if (m != n && m != o && n != o)
	{
	putchar(m);
	putchar(n);
	putchar(o);
	if (m + n + o < 24)
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
