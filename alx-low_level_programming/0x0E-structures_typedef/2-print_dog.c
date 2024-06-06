#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints elements in a structure
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");
	if ((*d).name == NULL)
		printf("(nil)");
	else
		printf("name: %s\n", (*d).name);
	printf("age: %f\n", (*d).age);
	printf("owner: %s\n", (*d).owner);
}
