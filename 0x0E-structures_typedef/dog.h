#ifndef DOG_
#define DOG_
/**
 * struct DOG - POPPY
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: attibutes dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
