#include "main.h"

/**
* _abs -  computes the absolute value of an integer
* @r: place holder for an integer
*
* Return: Always 0.
*/
int _abs(int r)
{
	if (r <= 0)
	{
		if (r < 0)
		{
			return (-r);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (r);
	}
}
