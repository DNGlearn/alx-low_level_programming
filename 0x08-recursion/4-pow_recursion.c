#include "main.h"
/**
 * _pow_recursion - cant stop the func
 * @x: the no.
 * @y: the power
 * Return: the ans
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (0);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(y - 1));
}
