#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free a dog described in heap region
 * @d: point to struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
