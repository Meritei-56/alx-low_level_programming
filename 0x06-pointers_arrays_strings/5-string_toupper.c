#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function
 * Description: changes lowercase to uppercase
 * @st: string
 * Return: st
 */
char *string_toupper(char *st)
{
	int j;

	j = 0;
	while (st[j] != '\0')
	{
		if (st[j] >= 'a' && st[j] <= 'z')

			st[j] = st[j] - 32;
		j++;

	}
	return (st);
}


