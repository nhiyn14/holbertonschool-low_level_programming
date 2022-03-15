#include <stdlib.h>
#include "lists.h"

/**
  * print_list - function that prints all the elements of a list_t list
  * @h: list to be printed
  * Return: the number of nodes
  * if str == NULL, print [0] (nil)
  */
size_t print_list(const list_t *h)
{
	int count  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
