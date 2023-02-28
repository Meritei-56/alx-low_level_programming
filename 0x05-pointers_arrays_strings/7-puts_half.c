#include "main.h"
#include <string.h>
/**
 * puts_half - function
 * Description: prints half of a string
 * @st: string
 * Return: void
 */
void puts_half(char *st)
{
	int len = 0;
	int j, n;

	for (j = 0; st[j] != '\0'; j++)
		len++;

	n = (len / 2);
	if ((len % 2) == 1)
		n = ((len + 1) / 2);
	for (j = n; st[j] != '\0'; j++)
		_putchar(st[j]);
	_putchar('\n');


}



