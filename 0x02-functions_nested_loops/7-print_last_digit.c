#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: The number to be computed
 * Return: The value of the last digit
 */

int print_last_digit(int c)
{
	int lastDigit = c % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
