#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function definition
 * Description: prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	if (*s != '\0')
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
}


