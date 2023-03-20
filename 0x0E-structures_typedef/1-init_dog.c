#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function definition
 * Description: initializes a variable of type struct dog
 * @d: structure member
 * @name: structure member of type char
 * @age: structure member
 * @owner: structure member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
