#include "main.h"

/**
 * set_bit - function
 * Description: sets value of a bit to 1
 * @n: pointer to the unsigned long int
 * @index: index where the value of bit is to be set
 *
 * Return: 1 if successful or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*8 is the number of bits in a char*/
	if (index >= sizeof(unsigned long int) * 8) /*index is out of range*/
	{
	return (-1);
	}
	else
	{
	*n |= (1UL << index); /*bitwise OR is used to set bit to 1*/
	}
	return (1);
}
