#include <stdlib.h>
#include "dog.h"
/**
 * int_dog - initializes a variable of type struct dog
 * @d: pointer to initialize struct dog
 * @name: to initialize
 * @age: to initialize
 * @owner: to intialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
