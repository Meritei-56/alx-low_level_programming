#include "main.h"

/**
 * binary_to_uint - function
 * Description: converts binary to unsigned int
 * @b: pointer to a string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int count = 0;
	int j = 0;
	unsigned int decval = 1; /*decimal value*/

	if (b == NULL)
	{
	return (0);
	}

	len = strlen(b);

	for (j = (len - 1); j >= 0; j--)
	{
	while (b[j] != '0' && b[j] != '1')
	{
		return (0);
	}
	if (b[j] == '1')
	{
		count += decval;
	}
	decval *= 2;
	}

	return (count);
}
