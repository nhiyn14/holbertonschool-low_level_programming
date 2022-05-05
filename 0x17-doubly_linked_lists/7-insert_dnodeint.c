#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position of a DLL.
 * @h: head of the DLL to be printed.
 * @idx: index of the node starting from 0.
 * @n: data for the new node
 * Return: address of the new node, or NULL if it failed/can't add new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i;

	if (h == NULL || n == '\0')/*no address for DLL*/
		return (0);
	current = *h;
	if (current == NULL && idx > 0)/*fail*/
		return (0);

	if (idx == 0)/*add node at start*/
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	new = malloc(sizeof(*new));/*malloc new node*/
	if (new == NULL)
		return (0);
	new->n = n;

	for (i = 0; current != NULL && i <= idx - 1; i++)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	if (i == idx)
	{
		new = new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
	return (0);
}
