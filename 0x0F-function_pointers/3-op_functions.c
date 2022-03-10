#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - return sum
  * @a: int
  * @b: int
  * Description: sum of a and b
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - return difference
  * @a: int
  * @b: int
  * Description: difference of a and b
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product
  * @a: int
  * @b: int
  * Description: product of a and b
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the result of the division
  * @a: int
  * @b: int
  * Description: div of a and b
  * Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - returns the remainder of the division
  * @a: int
  * @b: int
  * Description: remainder of a and b
  * Return: a % b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
