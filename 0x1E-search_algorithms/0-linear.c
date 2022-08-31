#include "search_algos.h"

/**
  * linear_search - linear search algorithm
  * @array: pointer to the 1st element of the array
  * @size: number of the element in the array
  * @value: the value to search
  * Return: index of the searched value, otherwise return -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
