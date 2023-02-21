#include "main.h"

/**
 * main - function to print the alphabets in lowercase
 * followed by new line
 * print_alphabet - protype to make alphabets
 * Return: void
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
