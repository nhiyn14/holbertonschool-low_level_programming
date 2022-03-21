#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t
  * and returns the head node’s data (n).
  * @head: pointer to a pointer to head of list.
  * Return: 0 if linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *firstNode;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	firstNode = *head;
	n = firstNode->n;
	*head = firstNode->next;
	free(firstNode);
	return (n);
}
