#ifndef _DOG_
#define _DOG_

/**
 * struct dog - contains details of a dog.
 * @name: pointer to the name of the dog.
 * @age: The age of the dog.
 * @owner: pointer to the owner of the dog.
 *
 * Description: A structure to store the details and descriptions of a dog
 * its name, age and the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/* Definition of an alias for struct dog*/
typedef struct dog dog_t;


/*Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
