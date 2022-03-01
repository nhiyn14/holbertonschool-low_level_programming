#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * *create_array - a function that creates an array of chars
  * @size: size of an array
  * @c: char to initialize the array with
  *
  * Description: Initialize an array with the given size and specific char
  *
  * Return: the wanted array or NULL if fail or size = 0
  */
char *create_array(unsigned int size, char c)
{
	char *arrayChar;
	unsigned int i = 0; /*place holder of arrayChar*/

	arrayChar = malloc(sizeof(char) * size);
	if (size == 0 || arrayChar == NULL)
		return (NULL);
	while (i < size)
	{
		*(arrayChar + i) = c;
		i = i + 1;
	}
	return (arrayChar);
}
