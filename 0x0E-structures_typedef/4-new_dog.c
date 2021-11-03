#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - entry point
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: null if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(new);
		free(name);
		free(owner);
		return (NULL);

	}
	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;
	return (new);
}
