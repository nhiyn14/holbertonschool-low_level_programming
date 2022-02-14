#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer a (intially set to int a)
 * @b: pointer b (intially set to int b)
 *
 * Description: output:
 * n = 98
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
