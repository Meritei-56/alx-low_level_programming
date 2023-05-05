#include "main.h"
/**
 * get_endianness - function
 * Description: checks the endianess
 *
 * Return: 1 if little endianness and 0 fir big endianness
 */
int get_endianness(void)
{
	char *srn;
	unsigned int i;

	i = 1;
	srn = (char *) &i;
	/*function should return 1 or 0*/
	return (*srn == 1);
}
