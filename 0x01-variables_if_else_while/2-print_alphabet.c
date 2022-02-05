#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet in lowercase, followed by a new line
*
* Description: Output should be
* abcdefghijklmnopqrstuvwxyz
*
* Return: 0
*/
int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
