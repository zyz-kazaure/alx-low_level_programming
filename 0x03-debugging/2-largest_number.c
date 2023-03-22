#include "main.h"

/**
 * largest_number - returns the latgest number
 * @a: first integer
 * @b: second integer
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > c && c > b)
		largest = a;
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
		largest = b;
	else if (c > a && a > b)
		largest = c;
	else
	{
		largest = c;
	}
	return (largest);
}
