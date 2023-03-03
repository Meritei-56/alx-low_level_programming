#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function definition
 * Description: prints a buffer
 * @b: buffer
 * @size: bytes of buffer printed
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m, n, k;

	m = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		n = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (k = 0; k < 10; k++)
		{
			if (k < n)
				printf("%02x ", *(b + m + k));
			else
				printf(" ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < n; k++)
		{
			int c = *(b + m + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		m += 10;
	}
}
