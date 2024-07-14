#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct that defines a dog with a name, age, and owner.
 * @name: Name of the dog, type = char *
 * @age: Age of the dog, type = float
 * @owner: Owner of the dog, type = char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

