#include "main.h"

/**
 * _isupper - function that checks uppercase characters
 * @c: characters entered
 *
 * Return: 1 or 0 depending on character
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else if (c != 65 && c != 90)
	{
	return (0);
	}
	
}
