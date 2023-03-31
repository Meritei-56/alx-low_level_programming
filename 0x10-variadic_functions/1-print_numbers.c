#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function
 * Description: prints numbers followed by a new line
 * @separator: string to be printed
 * @n: number of integers passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int k;

	va_start(par, n);

	if (separator == NULL)
		separator = "";

	for (k = 0; k < n; k++)
	{
	printf("%d", va_arg(par, int));

	if (k < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
