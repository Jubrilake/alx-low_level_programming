#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: Check the number to be computed
 * Return: Number shoul return nothing if greater than 10 or less than 0
 */

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;

			if (prod <= 99)
			{
				_putchar(' ');

				if (prod <= 9)
				{
					_putchar(' ');

					if (prod >= 100)
					{
						_putchar((prod / 100) + '0');
						_putchar((prod / 100) % 10 + '0');
					}
					else if (prod <= 100 && prod >= 10)
					{
						_putchar((prod / 100) + '0');
					}
					_putchar((prod % 100) + '0');
				}
			_putchar('_');
			}
		}
	}
	}
}
