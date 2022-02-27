#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed into it \n
  * @argc: argument count
  * @argv: array of pointer
  *
  * Description:  prints the number of arguments
  *
  * Return: argument count
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] != argv[argc - 1])
		i++;
	printf("%d\n", i);
	return (0);
}
