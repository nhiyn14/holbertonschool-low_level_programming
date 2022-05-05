#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint -  func returns the sum of all the data (n) of a DLL.
 * @head: head of the DLL.
 * Return: returns the sum of all the data
 * or NULL if it failed/list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int i, sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	if (current == NULL)
		return (0);

	for (i = 0; current != NULL; i++)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
