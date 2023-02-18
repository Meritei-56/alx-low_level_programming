#include <stdio.h>

/**
 * main - a program to print alphabets in lowercase
 * and uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	/* print alphabets in uppercase*/

		for (c = 'A'; c <= 'Z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	return (0);
}
