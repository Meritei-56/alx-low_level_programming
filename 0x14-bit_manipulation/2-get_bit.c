#include "main.h"

/**
 * get_bit - function
 * Description: returns value of a bit at the index provided
 * @n: number
 * @index: index
 *
 * Return: value of bit at index or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;
	int b;	/* bit returned */

	if (n == '0')
		return (-1);

	m = 1 << index;

	b = n & m;  /** bitwise & used to isolate bit at index*/

	return (b ? 1 : 0);
}


