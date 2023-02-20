#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print all possible combinations of two digits
 * only the smallest combination to be printed
 * only putchar to be used
 * putchar can only be used 5 times maximum
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a < '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
	if (b != a)
	{
	putchar(a);
	putchar(b);
	if (a == '8' && b == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
