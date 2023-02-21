#include "main.h"

/**
 * int _islower(int c) - prototype
 * function _islower' - program to check if character entered is lowercase
 * 'c' - character entered
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

