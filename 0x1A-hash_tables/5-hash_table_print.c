#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table you want to add
 * Return: the value, 0 otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;
	int flag = 0;/* 0 mean we're at 1st node*/

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (flag == 1)/* 1 mean we're not at 1st node*/
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
		index++;
	}
	printf("}\n");
}
