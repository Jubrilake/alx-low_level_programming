#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter passed as string
 * @s2: parameter passed as string
 * Return: Always (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
