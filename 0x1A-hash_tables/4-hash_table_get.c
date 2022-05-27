#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to add
 * @key: the key.
 * Return: the value, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *targetNode;
	int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	targetNode = ht->array[index];

	while (targetNode != NULL)
	{
		if (strcmp(key, targetNode->key) == 0)
			return (targetNode->value);
		targetNode = targetNode->next;
	}
	return (NULL);
}
