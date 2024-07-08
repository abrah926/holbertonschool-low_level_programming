#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct for dog attributes
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 *
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
