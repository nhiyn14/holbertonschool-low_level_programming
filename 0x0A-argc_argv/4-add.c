#include <stdio.h>
#include <stdlib.h>

/**
  * isAllDigit - Check if string only contain numbers
  * @c: string to be checked
  * Description: Check string
  * Return: 1 is string only contains numbers, else return 0
 */
int isAllDigit(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= '0' && c[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/**
  * main - program that adds positive numbers. \n
  * @argc: argument count
  * @argv: array of pointer
  *
  * Description:  stdout is sum of ALL input numbers
  *
  * Return: sum if all inputs are numbers
  * else return Error
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argv[1] == argv[argc])
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (isAllDigit(argv[i]) == 1)
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
