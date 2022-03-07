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

	newDog->name = _strcpy(newDog->name, name);
	newDog->owner = _strcpy(newDog->owner, owner);
	newDog->age = age;

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

/**
 * *_strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @dest: pointer dest (where to set string from src)
 * @src: hold string to be copied to dest
 *
 *
 * Description: if src = "Hello"
 * => dest = "Hello"
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = _strlen(src);

	while (a <= b)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
