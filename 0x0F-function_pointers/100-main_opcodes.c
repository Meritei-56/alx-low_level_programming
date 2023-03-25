#include <stdio.h>
#include <stdlib.h>

/**
 * main - create code
 * Description: prints opcode
 * @argv: array of pointers
 * @argc: number of arguments supplied
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, bytes;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < bytes; count++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (count == bytes - 1)
			continue;
		printf(" ");

		addr++;

	}

	printf("\n");

	return (0);
}
