#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter passed in as arguement
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - Entry points
 * @n: parameter passed in as arguement
 * @i: parameter passed in as arguemnet
 * Return: Always 0 (Success)
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
