#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints all arguments it receives \n
  * @argc: argument count
  * @argv: array of pointer
  *
  * Description:  prints all arguments it receives
  *
  * Return: each argument per line
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] != argv[argc])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
