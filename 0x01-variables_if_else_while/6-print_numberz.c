#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all single digit numbers 0 to 10 /n not use char
*
* Description: Output should be
* 0123456789
*
* Return: 0
*/
int main(void)
{
	short a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
