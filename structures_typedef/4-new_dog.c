#include "dog.h"
#include <stdlib.h>

/* local helpers (مسموحة) */
static int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

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
 * new_dog - creates a new dog, copying name and owner
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int ln, lo;

	d = malloc(sizeof(*d));
	if (d == 0)
		return (0);

	ln = _strlen(name);
	lo = _strlen(owner);

	d->name = malloc(ln + 1);
	if (d->name == 0)
	{
		free(d);
		return (0);
	}
	d->owner = malloc(lo + 1);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (0);
	}

	_strcpy(d->name, name ? name : "");
	_strcpy(d->owner, owner ? owner : "");
	d->age = age;

	return (d);
}
