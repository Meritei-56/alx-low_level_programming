#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - create code
 * Description: prints result of a multiplication
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);

	return (0);
}


