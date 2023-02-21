#include "main.h"

/**
 * function _islower - program to check character entered
 * parameter or member 'c' - character entered
 *
 * Return: 1 if lowercase character or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

