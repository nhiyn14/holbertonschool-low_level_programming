#ifndef FUNCTION_PTR_H
#define FUNCTION_PTR_H

#include <stdio.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_PTR_H */
