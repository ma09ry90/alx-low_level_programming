#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a functin that free dog
 * @d: pointer for struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
