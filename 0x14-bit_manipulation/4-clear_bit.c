#include "main.h"
/**
 * clear_bit - function
 * Description: sets value of a bit at a specific index to 0
 * @n: number
 * @index: index starting from 0
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*function returns -1 if index is out of range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	else
	*n &= ~(1UL << index);
	/*& clears bit to 0*/
	/*~used to construct a mask*/
	return (1);
}
