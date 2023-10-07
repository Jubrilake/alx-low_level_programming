#include <stdio.h>

/**
 * main - Prints  all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstNum, secondNum;

	for (firstNum = 0; firstNum <= 98; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum <= 99; secondNum++)
		{
			putchar((firstNum / 10) + '0');
			putchar((firstNum % 10) + '0');
			putchar(' ');
			putchar((secondNum / 10) + '0');
			putchar((secondNum % 10) + '0');
			if (firstNum == 98 && secondNum == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
