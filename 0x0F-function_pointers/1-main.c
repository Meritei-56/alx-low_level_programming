#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function 
 * Description: executes a function
 * @size:
 * @action:
 * @array:
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

