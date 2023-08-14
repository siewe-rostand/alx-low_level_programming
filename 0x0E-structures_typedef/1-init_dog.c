#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: param of struct dog type
 * @name: pointer to a char
 * @age: float param
 * @owner: pointer to a char param
 *
 * Return: nothing
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
