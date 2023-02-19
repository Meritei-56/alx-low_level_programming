#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program to assign a random number to variable n
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	} else if (ld  < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	} else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}

	return (0);
}
