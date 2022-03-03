#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc - a function that allocates memory for an array, using malloc.
  * @nmemb: number of elements
  * @size: sizeof(bytes)
  *
  * Description: Similar to calloc function
  *
  * Return: allocate memo for an array with nmemb elements if size bytes
  * The memory is set to 0
  * if nmemb OR size == 0, return NULL
  * if malloc fails, return NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;
	unsigned int i = 0; /*place holder of calloc*/

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloc = malloc(size * nmemb);
	if (calloc == NULL)
	{
		free(calloc);
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
		*(calloc + i) = 0;
	return (calloc);
}
