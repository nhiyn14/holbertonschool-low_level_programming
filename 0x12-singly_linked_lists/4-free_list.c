#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_list - frees a list_t list.
  * @head: pointer to a pointer to head of linked list.
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head);
}
