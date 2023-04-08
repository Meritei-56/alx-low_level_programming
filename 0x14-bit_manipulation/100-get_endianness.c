#include "main.h"

/**
 * get_endianness - function
 * Description: checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	/*assumes that size of unsigned int is 4 bytes*/
	char *s;
	unsigned int n;

	n = 1;
	s = (char *) &n;

	return (*s == 1);
}
