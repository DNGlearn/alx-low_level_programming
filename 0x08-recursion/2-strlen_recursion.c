#include "main.h"
/**
 * _strlen_recursion - the func
 * @s: the tings
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
