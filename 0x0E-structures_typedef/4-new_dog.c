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
	if (name == NULL || owner == NULL)
		return (NULL);
	dog_t *new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;
	return (new);
}
