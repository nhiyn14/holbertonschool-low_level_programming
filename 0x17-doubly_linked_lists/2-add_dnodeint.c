#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint -  function adds a new node at the beginning of a DLL.
 * @head: head of the DLL to be printed.
 * @n: date to add to the new node.
 * Return: address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (0);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
