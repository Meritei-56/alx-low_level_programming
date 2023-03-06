#include "main.h"
#include <stdio.h>

/**
 * set_string - function definition
 * Description: sets value of a pointer to a char
 * @s: pointer
 * @to: char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
