#include <stdio.h>

/**
 * main - program to print alphabets
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
