#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index -  inserts a new node at a given position.
  * @head: pointer to pointer to head of list.
  * @idx: index where to add node.
  * @n: value to add
  * Return: the address of the new node, NULL if fail
  * if impossible to add at idx, do not add and return NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newNode = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	while (tmp != NULL)
	{
		if (count == idx)
		{
			newNode = malloc(sizeof(*newNode));
			if (newNode == NULL)
			{
				free(newNode);
				return (NULL);
			}
			newNode->n = n;
			if (idx == 0)
			{
				newNode->next = *head;
				*head = newNode;
			}
			else
			{
				newNode->next = tmp->next;
				tmp->next = newNode;
			}
			break;
		}
		tmp = tmp->next;
		count++;
	}
	if (idx != count)
		return (NULL);
	return (newNode);
}
