#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - create code
 * Description: prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
	printf("%s\n", argv[k]);
	}
	return (0);
}

