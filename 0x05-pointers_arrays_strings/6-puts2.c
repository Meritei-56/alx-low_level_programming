#include "main.h"
#include <string.h>

/**
 * puts2 - function
 * Description: prints string characters in reverse
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int m;
	int n = 0;

	while (str[n] != '\0')
	{
	n++;
	}

	for (m = 0; m < n; m += 2)
	{
	_putchar(str[m]);
	}
	_putchar('\n');
}
