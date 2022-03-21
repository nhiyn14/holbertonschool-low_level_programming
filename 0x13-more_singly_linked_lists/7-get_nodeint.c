#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a linked list.
  * @head: pointer to head of list.
  * index: the index of the node, starting at 0
  * Return: NULL if node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexNode;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (count == index)
		{
			indexNode = head;
			break;
		}
		head = head->next;
		count++;
	}

	if (index != count)
		return (NULL);

	return (indexNode);
}
