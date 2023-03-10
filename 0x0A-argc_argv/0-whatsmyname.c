#include <stdlib.h>
#include <stdio.h>
/**
 * main - create code
 * Description: a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);

	return (0);
}
