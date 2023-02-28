#include "main.h"
#include <string.h>

/**
 * rev_string - function
 * Description: reverses string
 * @t: string
 * Return: void
 */
void rev_string(char *t)
{
	int k = 0;
	char r = t[0];
	int l;

	while (t[k] != '\0')
	k++;
	for (l = 0; l < k; l++)
	{
		k--;
		r = t[l];
		t[l] = t[k];
	       t[k] = r;
	}
}
