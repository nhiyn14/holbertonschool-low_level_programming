#include <stdio.h>
/**
* main - Print size of various types on the computer it is compiled and run on
*
* Description: Practice printf function
*
* Return: 0
*/
int main(void)
{
	printf("Size of a char:%zu\n", sizeof(char));
	printf("Size of a int:%zu\n", sizeof(int));
	printf("Size of a long int:%zu\n", sizeof(long));
	printf("Size of a long long int:%zu\n", sizeof(double));
	printf("Size of a float:%zu\n", sizeof(float));
	return (0);
}
