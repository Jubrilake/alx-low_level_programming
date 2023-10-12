#include <stdio.h>

/**
 * main - Print If number is positive, negative or zero
 * Return: Always (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
        {
        printf("%d is positive\n", i);
        }
        else if (i < 0)
        {
        printf("%d is negative\n", i);
        }
        else
        {
        printf("%d is zero\n", i);
        }
        return;
}
