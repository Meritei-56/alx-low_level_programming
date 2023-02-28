#include "main.h"
#include <string.h>

/**
 * _strlen - function definition
 * Description: returns length of string
 * @srn: string
 * Return: string length
 */

int _strlen(char *srn)
{
	int l = 0;

	while (*srn++)
	l++;
	return (l);
}
