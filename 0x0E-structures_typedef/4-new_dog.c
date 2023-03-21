#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - determines stringth length
 * @str: string
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;

	return (l);
}
/**
 * _strcopy - copies a string
 * @src: source string
 * @dest: buffer
 *
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int count = 0;

	for (count = 0; src[count]; count++)
		dest[count] = src[count];

	dest[count] = '\0';

	return (dest);

}
/**
 * new_dog - function
 * Description: creates a new dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);

	return (d);
}


