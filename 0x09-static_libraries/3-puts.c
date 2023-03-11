#include "main.h"
#include <string.h>

/**
 * _puts - function definition
 * Description: prints a string
 * @srn: string
 * Return: void
 */
void _puts(char *srn)
{
	for (; *srn != '\0'; srn++)
	{
	_putchar(*srn);
	}
	_putchar('\n');
}

