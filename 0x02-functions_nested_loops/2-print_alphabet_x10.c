#include "main.h"

/**
 * print_alphabet_x10 - make alphabet ten times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char alphabet;

	while (times < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		times++;
	}
}
