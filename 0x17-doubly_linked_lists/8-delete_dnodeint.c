#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a DLL.
 * @head: head of the DLL to be printed.
 * @index: index of the wanted node.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	current = *head;
	if (current == NULL)/*empty list*/
		return (-1);
	if (index == 0)/*delete first node*/
	{
		if (current->next != NULL)/*case where there is >2 nodes*/
		{
			next = current->next;
			next->prev = NULL;
			*head = next;
		}
		free(current);/*case where there is only 1 node*/
		return (1);
	}
	else /*delete NOT-first node */
	{
		while (current != NULL && i <= index)
		{
			next = current->next;
			prev = current->prev;
			if (i == index)
			{
				next->prev = prev;
				prev->next = next;
				free(current);
				return (1);
			}
			current = next;
			i++;
		}
	}
	return (-1);
}
