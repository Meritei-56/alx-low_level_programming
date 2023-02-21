#include "main.h"

/**
 * _isalpha - checks alphabetic characters
 *
 * c - character entered to the system
 *
 * Return: 1 if a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
