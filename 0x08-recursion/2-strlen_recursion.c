#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: parameter passed in as arguement
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
