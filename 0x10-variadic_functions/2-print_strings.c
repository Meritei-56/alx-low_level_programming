#include "variadic_functions.h"

/**
 * print_strings - function
 * Description: prints strings
 * @separator: string to be printed
 * @n: number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *srn;
	va_list par;

	va_start(par, n);
	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
	srn = va_arg(par, char*);
	if (srn == NULL)
		srn = "(nil)";
	printf("%s", srn);
	if (j < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
