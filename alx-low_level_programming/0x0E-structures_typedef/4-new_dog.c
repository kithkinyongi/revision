#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - describes a dog, memory in heap region
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to heap region, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(((sizeof(name) + sizeof(owner)) * sizeof(char)) + sizeof(float));
	if (ptr == NULL)
		return (NULL);
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	return (ptr);
}
