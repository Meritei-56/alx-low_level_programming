#include <stdio.h>

/**
 * main - program to print alphabets
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char Alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c < 26; c++)
	{
		putchar(Alp[c]);
	}
	putchar("Alp\n");
	return (0);
}
