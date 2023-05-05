#include "main.h"
/**
 * flip_bits - function prototype
 * Description: returns number of bits that need to be fliped
 * @n: initial number
 * @m: number formed
 * Return: sum of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int rlt;

	count = 0;
	rlt = n ^ m;

	while (rlt != 0)
	{
	count += rlt & 1;
	rlt >>= 1;
	}
	return (count);
}
