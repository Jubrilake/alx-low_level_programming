#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstNum, secondNum;

	for (firstNum = '0'; firstNum < '9'; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum <= '9'; secondNum++)
		{
			if (firstNum != secondNum)
			{
				putchar(firstNum);
				putchar(secondNum);
				if (firstNum == '8' && secondNum == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

