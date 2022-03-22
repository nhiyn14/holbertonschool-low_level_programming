#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at index of a linked list.
  * @head: pointer to pointer to head of list.
  * @index: index where to add node.
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode, *tmp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	deleteNode = *head;
	if (index == 0)
	{
		*head = deleteNode->next;
		free(deleteNode);
		return (1);
	}
	while (deleteNode->next != NULL)
	{
		if (count == index)
		{
			tmp = deleteNode;
			deleteNode = deleteNode->next;
			tmp->next = deleteNode->next;
			free(deleteNode);
			break;
		}
		deleteNode = deleteNode->next;
		count++;
	}
	if (index != (count - 1))
		return (-1);
	return (1);
}
