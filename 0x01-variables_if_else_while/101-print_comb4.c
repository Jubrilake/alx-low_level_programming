#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstNum, secondNum, thirdNum;

	for (firstNum = '0'; firstNum < '9'; firstNum++)
	{
		for (secondNum = 1 + firstNum; secondNum <= '9'; secondNum++)
		{
			for (thirdNum = 1 + secondNum; thirdNum <= '9'; thirdNum++)
			{
				if ((secondNum != firstNum) != thirdNum)
				{
					putchar(firstNum);
					putchar(secondNum);
					putchar(thirdNum);
					if (firstNum == '7' && secondNum == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
