#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: pointer to a pointer to head of list.
  */
void free_listint2(listint_t **head)
{
	listint_t *nextNode;
	listint_t *tmp = *head;

	if (head == NULL)
		return;

	while (tmp != NULL)
	{
		nextNode = tmp->next;
		free(tmp);
		tmp = nextNode;
	}
	*head = NULL;
}
