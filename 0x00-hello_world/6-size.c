#include<stdio.h>
/**
 * main - To create a program that prints the sizes of various data types in a computer dependin on the different sizes
 *
 * Ruturn 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int e;
	float f;

		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
