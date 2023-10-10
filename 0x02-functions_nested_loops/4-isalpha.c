#include "main.h"

/**
 * _isalpha - hecks for alphabetic character
 * @c - Returns 1 if c is a letter, lowercase or uppercase
 * Return: Always 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}else if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
