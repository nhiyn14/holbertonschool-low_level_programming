#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array.
  * @array: the array
  * @size: size of the array
  * @action: ptr to the function to be used
  *
  * Description: Using funtion ptr to execute a  function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
