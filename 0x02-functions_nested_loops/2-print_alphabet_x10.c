#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int n = 0;

	while (n <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			_putchar('\n');
			n++;
		}
}


