#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter passed in as an arguement
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	newstr = malloc((sizeof(char) * i) + 1);

	if (newstr == NULL)
		return (NULL);

	while (a < i)
	{
		newstr[a] = str[a];
		a++;
	}

	newstr[a] = '\0';
	return (newstr);
}
