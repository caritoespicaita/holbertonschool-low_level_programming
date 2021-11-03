#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Entry point
 * @d: passing structure at the function
 * return: nil
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d -> name == NULL)
			printf("Name: %p\n", (void *) 0);
		else
			printf("Name: %s\n", d -> name);

		printf("Age: %f\n", d -> age);

		if (d -> owner == NULL)
			printf("Owner: %p\n", (void *) 0);
		else
			printf("Owner: %s\n", d -> owner);
        }
}
