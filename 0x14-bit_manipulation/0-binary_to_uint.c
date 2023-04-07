#include "main.h"

/**
 * binary_to_uint - function
 * Description: converts binary number to unsigned int
 * @b: string
 *
 * Return: converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int blen = strlen(b);
	unsigned int dval = 1; /*j is the decimal value*/
	int k = 0;

	if (b == NULL)
		return (0);

	for (k = (blen - 1); k >= 0; k--)
	{
	if (b[k] != '0' && b[k] != '1')
		return (0);
	if (b[k] == '1')
	{
		sum += dval;
	}
	dval *= 2;
	}

	return (sum);
}
