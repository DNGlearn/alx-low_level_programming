#include "main.h"
/**
 * factorial - the func
 * @n: the digit
 * Return: 1 if n is 0, -1 if n is negative, f if n is positive
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
