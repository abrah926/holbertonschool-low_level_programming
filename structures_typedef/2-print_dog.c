#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints all of a struct attribrutes
 *@d: points to a struct of a dog
 *Return: exit
 */
void print_dog(struct dog *d)
{
	/*check if pointer not null*/
	if (d != NULL)
	{
		/*check if the atts of the struct are not empty*/
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	} /*end if*/
	else
		return;
} /*end function*/
