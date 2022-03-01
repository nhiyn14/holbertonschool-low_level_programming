#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * *_strdup- returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: given string
  *
  * Description: Similar to function strdup
  *
  * Return: if succeed, return pointer to the duplicate of str
  * NULL if str == NULL or insufficient memory was available
  */
char *_strdup(char *str)
{
	char *arrayChar;
	char size = _strlen(str) - 1;
	int i = 0; /*place holder of arrayChar*/

	arrayChar = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	while (i < size)
	{
		*(arrayChar + i) = *(str + i);
		i = i + 1;
	}
	return (arrayChar);
	free (arrayChar);
}

/**
 * _strlen - returns the length of a string.
 * @str: pointer s (set to int a)
 *
 *
 * Description: output: str = Hello
 * _strlen(str) = 5
 *
 * Return: Length
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
