#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog.
  * @name: doggo name
  * @age: doggo age
  * @owner: doggo human friend
  * Return: Store a copy of name and owner, 0 if fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	unsigned int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(_strlen(name));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(_strlen(owner));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < _strlen(name); i++)
		*(newDog->name + i) = *(name + i);
	newDog->age = age;
	for (i = 0; i < _strlen(owner); i++)
		*(newDog->owner + i) = *(owner + i);
	return (newDog);
}

/**
 * _strlen - returns the length of a string.
 * @str: pointer s (set to int a)
 *
 *
 * Description: output: str = Hello
 * _strlen(str) = 5
 *
 * Return: Length
 */
unsigned int _strlen(char *str)
{
	unsigned int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
