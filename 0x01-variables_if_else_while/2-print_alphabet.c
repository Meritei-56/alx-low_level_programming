#include <stdio.h>

/**
 * main - program to print alphabets in lower case
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
