#include "main.h"

/**
 * _islower - function definition
 * Description: checks characters entered
 * @c: - character entered to be checked to-
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
