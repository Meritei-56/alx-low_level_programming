#include "main.h"

/**
 * main - function to print the alphabets in lowercase
 * followed by new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
