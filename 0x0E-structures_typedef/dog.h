#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes a dog and its attributes
 * @name: First member, char pointer
 * @age: Second member, float
 * @owner: Third memeber, char pointer
 * Description: This struct has three elements and is a new type dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - Typdef for dog type
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
