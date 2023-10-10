#include "main.h"

/**
 * print_alphabet_x10 - make alphabet ten times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int times;
	char alphabet;

	for (times = 0; times < 10; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		return;
	}
}
