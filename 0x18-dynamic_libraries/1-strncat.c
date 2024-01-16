#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: a parameter passed in as string
 * @src: a parameter passed in as string
 * @n: number of bytes from src
 * Return: Always (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, index = 0;

	while (dest[index++])
		length++;
	for (index = 0; src[index] && index < n; index++)
	{
		dest[length++] = src[index];
	}
	return (dest);
}
