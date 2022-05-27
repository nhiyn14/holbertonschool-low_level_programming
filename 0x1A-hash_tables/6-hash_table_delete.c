#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table..
 * @ht: hash table you want to add
 * Return: the value, 0 otherwise
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *two;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			two = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = two;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
