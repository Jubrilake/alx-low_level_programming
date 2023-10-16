#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers
 * @a: value of a integer
 * @b: value of b integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
