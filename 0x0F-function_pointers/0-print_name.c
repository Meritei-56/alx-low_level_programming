#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function definition
 * Description: prints name
 * @name: person's name
 * @f: function that returns void
 * @char: char pointer argument for f function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
