#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  func returns the nth node of a DLL.
 * @head: head of the DLL to be printed.
 * @index: index of the node starting from 0.
 * Return: nth node value or NULL if it failed/node not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (0);
	current = head;
	if (current == NULL && index > 0)
		return (0);

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
