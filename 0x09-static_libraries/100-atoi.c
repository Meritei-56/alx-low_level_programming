#include "main.h"

/**
 * _atoi - function definition
 * Description: converts string to integer
 * @s: string pointer
 *
 * Return: string integer value
 */
int _atoi(char *s)
{
	int n = 1;
	unsigned int m = 0;

	do {
		if (*s == '-')
		{
			n *= -1;
		}

		else if (*s >= '0' && *s <= '9')
		{
			m = (m * 10) + (*s - '0');

		}
		else if (m > 0)
		{
			break;
		}
	} while (*s++);

	return (m * n);
}

