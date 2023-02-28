#include "main.h"
#include <string.h>

/**
 * print_rev - function definition
 * Description: prints string in reverse
 * @str: string
 * Return: void
 */
void print_rev(char *str)
{
	int l = 0;
	int i;

	while (*str != '\0')
	{
	l++;
	str++;
	}
	str--;
	for (i = l; i > 0; i--)
	{
	_putchar(*str);
	str--;
	}
	_putchar('\n');
}
