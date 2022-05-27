#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table
 * @ht: hash table you want to add
 * @key: the key.
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int index, size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && !strcmp(ht->array[index]->key, key))
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
