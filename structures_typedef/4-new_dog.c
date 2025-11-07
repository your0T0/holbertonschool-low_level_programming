#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Compute the length of a string
 * @s: pointer to the string
 *
 * Return: number of characters in @s (excluding the terminating '\0')
 */
static int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - Copy a string to a destination buffer
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to @dest
 */
static char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!src)
	{
		dest[0] = '\0';
		return (dest);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog (deep copy of name and owner)
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t on success, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int ln, lo;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);

	ln = _strlen(name);
	lo = _strlen(owner);

	d->name = malloc(ln + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(lo + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name ? name : "");
	_strcpy(d->owner, owner ? owner : "");
	d->age = age;

	return (d);
}
