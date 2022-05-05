#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node at the end of a DLL.
 * @head: head of the DLL to be printed.
 * @n: date to add to the new node.
 * Return: address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (0);
	current = *head;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
