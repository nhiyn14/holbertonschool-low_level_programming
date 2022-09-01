#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stddef.h>
#include <stdio.h>

/* linear search algorithm */
int linear_search(int *array, size_t size, int value);

/* binary search algorithm */
int binary_search(int *array, size_t size, int value);

/* print array */
void print_array(int *array, size_t size);

/* recursive search binary */
int binary_search_recursive(int *array, int left, int right, int value);

/* jump search algorithm */
int jump_search(int *array, size_t size, int value);

/* interpolation search algorithm */
int interpolation_search(int *array, size_t size, int value);

/* advanced binary search algorithm */
int advanced_binary(int *array, size_t size, int value);
#endif
