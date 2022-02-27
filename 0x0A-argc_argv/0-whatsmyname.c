#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - prints its name \n
  * @argc: argument count
  * @argv: array of pointer
  *
  * Description: Print its name, if renamed -> print rename name
  * Path before the name of the program should not be removed
  *
  * Return: Program's name
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
