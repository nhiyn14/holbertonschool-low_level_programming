#include <stdlib.h>
#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list
  * @h: list to count the number of elements from.
  * Return: the number of elements
  * if str == NULL, print [0] (nil)
  */
size_t list_len(const list_t *h)
{
	int count  = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
