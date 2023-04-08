#include "main.h"

/**
 * flip_bits - function
 * Description: returns number of bits to be fliped
 * @n: unsigned long int to be fliped
 * @m: integer to be fliped
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Xres;
	unsigned int sum = 0;

	Xres = n ^ m;
	while (Xres)
	{
	sum += Xres & 1;
	Xres >>= 1;
	}

	return (sum);
}

