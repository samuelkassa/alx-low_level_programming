#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcoy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * _strcopy - Copies a string pointed to by src, including the null
 * terminating null byte, to a buffer pointed to by dest.
 * @src: The source string to be copied.
 * @dest: The destinaion location for copying the src
 *
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *madog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	madog = malloc(sizeof(dog_t));

	if (madog == NULL)
		return (NULL);

	madog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (madog->name == NULL)
	{
		free(madog);
		return (NULL);
	}

	madog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (madog == NULL)
	{
		free(madog->name);
		free(madog);
		return (NULL);
	}

	madog->name = _strcopy(madog->name, name);
	madog->age = age;
	madog->owner = _strcopy(madog->owner, owner);

	return (madog);

}
