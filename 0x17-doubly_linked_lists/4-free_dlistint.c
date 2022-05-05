#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint -  function that frees a DLL.
 * @head: head of the DLL to be printed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	if (head != NULL)
	{
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
}
