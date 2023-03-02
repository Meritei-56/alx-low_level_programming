#include "main.h"
#include <stdio.h>
/**
 * leet - function
 * Description: encodes a string into 1337
 * @k: input
 * Return: k value
 */
char *leet(char *k)
{
	int m, n;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (m = 0; k[m] != '\0'; m++)
	{
	for (n = 0; n < 10; n++)
	{
	if (k[m] == str1[n])
	{
	k[m] = str2[n];
	}
	}
	}
	return (k);
}
