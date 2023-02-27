#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - function declaration
 * Description: takes pointer to and updates value
 * @p: pointer
 * Return: void
 */
void reset_to_98(int *p)
{
	int n;

	n = 402;
	p = &n;
	_putchar("%d");
	*p = 98;
	_putchar("%d");
}

