#include "main.h"

/**
 * print_alphabet - prototype function to print alphabets
 * _putchar function to be used
 * print_alphabet - prototype function to make alphabets
 * Return: void
 */
void print_alphabet(void)	/*proptype function*/

{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
