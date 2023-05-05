#include "main.h"
/**
 * set_bit - function
 * Description: sets value of bit at a specific index to 1
 * @index: index
 * @n: argument
 * Return: 1 if successful and -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*number of bits in a char = 8*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	*n |= (1UL << index);
	return (1);

}


