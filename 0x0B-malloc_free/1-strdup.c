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
	int size; /* +1 for \0 */
	int i = 0; /*place holder of arrayChar*/

	if (str == NULL)
		return (NULL);
	size = _strlen(str) + 1;
	arrayChar = malloc(size);
	if (arrayChar == NULL)
		return (NULL);
	while (i < size)
	{
		*(arrayChar + i) = *(str + i);
		i = i + 1;
	}
	return (arrayChar);
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
