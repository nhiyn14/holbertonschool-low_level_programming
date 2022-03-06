#include <stdio.h>

#ifndef __FILE__
#define __FILE__
#endif

/**
  * main - Print file name
  * Description: Print file name using __FILE__ macro
  * Return: 0
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
