#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function definition
 * Description: allocates a memory using malloc
 * @b: integer
 *
 * Return; pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pr;
       	
	pr = malloc(b);

	if (pr == NULL)
		exit(98);

	return (pr);
}
