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
	for (; *s != '\0'; s++)
	{
	_putchar(*s);
	}
	_putchar('\n');
}


