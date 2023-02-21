#include "main.h"

/**
 * _islower - program created by user to check characters entered
 * int 'c' - character entered to be checked to-
 * determine whether lowercase
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

