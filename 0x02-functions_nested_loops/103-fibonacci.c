#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms, followed by a new line.
 * Return: Always (Success)
 */

int main(void)
{
	int count = 0;
	long int first = 1, second = 2, sum = second;

	while (second + first < 4000000)
	{
		second += first;
		if (second % 2 == 0)
		{
			sum += second;
		}
		first = second - first;
		++count;
	}
	printf("%lu\n", sum);
	return (0);
}
