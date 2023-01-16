#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Author: Samuyel Kasahun
 * Description: This is a heder file that defines a new type struct dog..
 */

/**
 * struct dog - a structure about dog.
 * @name: The name of the dog.
 * @age: The age of dog
 * @owner: owner of the dog.
 *
 * Description: This sturcture is about dog status.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *  dog_t - typedef for struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
