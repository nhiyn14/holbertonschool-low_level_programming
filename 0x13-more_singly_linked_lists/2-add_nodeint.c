#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  * @head: pointer to a pointer to head of list.
  * @n: data to add to the new node.
  * Return: the address of the new element, NULL if fail.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
