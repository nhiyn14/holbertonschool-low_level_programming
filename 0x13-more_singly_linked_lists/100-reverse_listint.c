#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list.
  * @head: pointer to pointer to head of list.
  * Return: pointer to 1st node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
