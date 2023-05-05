#include "main.h"

/**
 * get_bit - function
 * Description: returns the value of a bit at a specific index
 * @index: index of the bit
 * @n: number where bit is to be extracted
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x; /*representing bits returned*/
	unsigned long int j;

	j = 1 << index;
	x = n & j; /*AND extracts bit the index*/

	return (x ? 1 : 0);
}
