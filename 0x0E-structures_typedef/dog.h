#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - new type definition
 *
 * @name: first member
 * @age: second member
 * @owner: last member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
