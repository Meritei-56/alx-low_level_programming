#include "main.h"

/**
 * main - function to print the alphabets in lowercase
 * followed by new line
 * prototype void print_alphabet(void) is used
 * Return: Always 0i
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
