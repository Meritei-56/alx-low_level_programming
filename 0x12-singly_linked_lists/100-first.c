#include <stdio.h>

void print_sentence(void) __attribute__ ((constructor));

/**
 * print_sentence - function
 * Description: prints sentences
 *
 * Return: void
 */
void print_sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
