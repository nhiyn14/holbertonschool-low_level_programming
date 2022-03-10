#include "3-calc.h"
#include <stdio.h>

/**
  * main - a program that performs simple operations
  * @argc: argument count
  * @argv: array of pointers to arguments
  *
  * Return: Wrong number of arguments, print Error\n, exit 98
  * Operator not match, print Error\n, exit 99
  * Divide by 0, print Error\n, exit 100
  */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
