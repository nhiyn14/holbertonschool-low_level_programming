#include <stdio.h>
#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s: copy to
 * @to: copy from
 *
 * Description: value of a pointer to a char.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
