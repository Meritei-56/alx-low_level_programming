#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a programto print base 16 numbers in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h;
	char d;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}

	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
