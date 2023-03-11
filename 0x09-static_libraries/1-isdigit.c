#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function definition
 * Description: checks for digits
 * @n: elements entered
 * Return: 1 if a digit otherwise 0
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
	return (1);
	}
	return (0);
}
