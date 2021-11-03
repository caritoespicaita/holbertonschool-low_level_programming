#include "dog.h"
#include <stdio.h>

/**
 * free_dog -entry point
 * @d: Entry of struct
 */
void free_dog(struct dog *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
	return (NULL);
}
