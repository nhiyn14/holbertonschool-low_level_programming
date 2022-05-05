#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -  function returns number of elements in a DLL.
 * @h: head of the DLL to be printed.
 * Return: number of element.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	for (i = 0; current != NULL; i++)
		current = current->next;
	return (i);
}
