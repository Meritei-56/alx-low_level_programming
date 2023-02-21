#include "main.h"

/**
 * main - function to print the alphabets in lowercase
 * followed by new line
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
	return (void);
}
