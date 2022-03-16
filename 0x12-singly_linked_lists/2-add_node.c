#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to a pointer to head.
  * @str: data to add to the new node.
  * Return: the address of the new element, NULL if fail.
  * Duplicate str
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer s (set to int a)
 *
 *
 * Description: output: str = Hello
 * _strlen(s) = 5
 *
 * Return: Length
 */
int _strlen(const char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
