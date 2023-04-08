#include "main.h"

/**
 * clear_bit - function
 * Descriprion: sets value of a bit to 0
 * @n: pointer to unsigned long int
 * @index: index where is to be set to 0
 *
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*-1 is returned if index is out of range*/
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	else
	{
	*n &= ~(1UL << index);/* AND operand used to clear bit to 0*/
	/*operand ~ used to construct a mask*/
	}
	return (1);
}
