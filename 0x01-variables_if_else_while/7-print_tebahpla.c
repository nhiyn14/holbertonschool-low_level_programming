#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints the lowercase alphabet in reverse \n
*
* Description: Output should be
* zyxwvutsrqponmlkjihgfedcba
*
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
