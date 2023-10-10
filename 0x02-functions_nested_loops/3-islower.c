#include "main.h"

/**
 * _islower - print lower case
 * @c: The parameter is to be checked
 * Return: Always 1 if lowercase or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
