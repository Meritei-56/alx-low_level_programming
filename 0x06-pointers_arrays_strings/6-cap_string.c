#include "main.h"
#include <stdio.h>
/**
 * cap_string - function
 * Description: capitalizes all words of a string
 * @st: string
 * Return: pointer to changed words
 */
char *cap_string(char *st)
{
	int ix = 0;

	while (st[ix])
	{
		while (!(st[ix] >= 'a' && st[ix] <= 'z'))
			ix++;

		if (st[ix - 1] == ' ' || st[ix - 1] == '\t' || st[ix - 1] == ',' || st[ix - 1] ==';' || st[ix - 1] == '.' || st[ix - 1] == '!' || st[ix - 1] == '?' || st[ix - 1] == '"' || st[ix - 1] || st[ix - 1] == '(' || st[ix -1] == ')' || st[ix - 1] == '{' || st[ix - 1] == '}' || ix == 0)
		       st[ix] -= 32;
	ix++;
	}

	return (st);
}

