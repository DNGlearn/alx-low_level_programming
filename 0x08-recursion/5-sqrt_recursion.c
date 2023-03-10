#include "main.h"
int ext_sqrt(int n, int s);
/**
 * _sqrt_recursion - the func goes on
 * @n: the nums
 * Return: the sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (ext_sqrt(n, 0));
}
/**
 * ext_sqrt - the func dont stop
 * @n: the num again
 * @s: the sqrt
 * Return: s
 */
int ext_sqrt(int n, int s)
{
	if (s * s > n)
	{
		return (-1);
	}
	if (s * s == n)
	{
		return (s);
	}
	return (ext_sqrt(n, s + 1));
}
