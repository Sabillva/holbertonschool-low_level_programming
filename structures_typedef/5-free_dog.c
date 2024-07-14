#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
	/*Free the name if it was dynamically allocated*/
		free(d->owner);
	/*Free the owner if it was dynamically allocated*/
		free(d);
	/*Free the dog structure itself*/
	}
}

