#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info about a dog
 * @name: dog's name (string)
 * @age: dog's age (float)
 * @owner: dog's owner (string)
 *
 * Description: Defines a dog with name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* typedef alias */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
