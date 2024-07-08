#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - declaring the struct
 * @char: name of the dog
 * @int: the age of the dog
 * @owner: Name of the owner of the dog
 *
 * Void print_dog - prints struct dog or either nil
 * or null
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil\n)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
