#include "main.h"

/**
 * _isupper - function that checks uppercase characters
 * @c: characters entered
 *
 * Return: 1 or 0 depending on character
 */

int _isupper(int c)
{
	if (c >= A && c <= Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
