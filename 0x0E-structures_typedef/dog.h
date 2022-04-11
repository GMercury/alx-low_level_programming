#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents andog with name. age and owner
 *@name: name of dog as a string
 *@age: age of dog as afloat
 *@owner: owner of the dog as a string
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
