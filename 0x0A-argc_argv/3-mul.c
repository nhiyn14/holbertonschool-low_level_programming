#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that multiplies two numbers \n
  * @argc: argument count
  * @argv: array of pointer
  *
  * Description:  stdout is product of input 2 numbers
  *
  * Return: Product if enter 2 numbers
  * else return Error
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
