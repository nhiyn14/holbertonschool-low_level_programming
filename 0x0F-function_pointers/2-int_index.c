#include "function_pointers.h"

/**
  * int_index - search for an integer
  * @array: the array of integers
  * @size: size of the array
  * @cmp: ptr to the function that compare values
  *
  * Description: Using funtion cmp to find an int in array
  *
  * Return: if cmp doesnt return 0, returns the index
  * if no matched element, return (-1)
  * if size <= 0, return (-1)
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int  i = 0;
	int index = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(*(array + i)) != 0)
			{
				index = i;
				break;
			}
			i++;
		}
	}
	if (index == 0)
		return (-1);
	return (index);
}
