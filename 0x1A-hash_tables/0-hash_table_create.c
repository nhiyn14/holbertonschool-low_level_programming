#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table.
 * otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_table_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	while (i < size)
	{
		htable->array[i] = NULL;
		i++;
	}
	return (htable);
}
