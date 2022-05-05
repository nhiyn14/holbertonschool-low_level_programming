#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head of the DLL to be printed.
 * Return: number of element.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
