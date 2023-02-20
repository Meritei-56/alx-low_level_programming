#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print single-digit numbers combinations
 * putchar function is the only allowed
 * putchar function can only be used 4 times maximum
 * all code should be in main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;

	}
	putchar('\n');

	return (0);

}
