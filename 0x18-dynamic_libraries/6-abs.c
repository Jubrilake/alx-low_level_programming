#include "main.h"

/**
 * _abs - the absolute value of an integer
 * @c: The number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = (-1) * c;
		return (c);
	}
	return (c);
}
