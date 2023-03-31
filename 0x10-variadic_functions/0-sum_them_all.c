#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function definition
 * Description: returns sum of parameters
 * @n: number of parameters
 * @...: variable number of parameters considered
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;
	va_list par;

	va_start(par, n);

	for (j = 0; j < n; j++)
	sum += va_arg(par, int);

	va_end(par);

	return (sum);
}

