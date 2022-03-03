#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr:  a pointer to the memory previously allocated
  * @old_size: allocated space for ptr
  * @new_size: size of the new memory block
  *
  * Description: Similar to function realloc
  *
  * Return: the pointer to the newly created array
  * range from the start of ptr up to the minimum of the old and new sizes
  * if new_size > old_size, the added memorry not be initialized
  * If new_size == old_size, do not do anything and return ptr
  * If ptr == NULL, malloc(new_size) for all values of old_size and new_size
  * If new_size == zero && ptr != NULL,free(ptr) and return NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc;
	char *cast = ptr;
	unsigned int i; /*place holder of realloc*/

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
	{
		free(realloc);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
		*(realloc + i) = *(cast + i);
	return (realloc);
}
