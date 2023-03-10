#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - create code
 * Description: adds positive integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;
	int n, m;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (k = 1; k < argc; k++)
	{
	for (m = 0; argv[k][m] != '\0'; m++)
	{
	if (!isdigit(argv[k][m]))
	{
	printf("Error\n");
	return (1);
	}
	}
	n = atoi(argv[k]);
	if (n < 0)
	{
	printf("Error\n");
	return (1);
	}
	sum += n;
	}
	printf("%d\n", sum);
	return (0);
}

