#include "main.h"
/**
 * _strlen_recursion - the func
 * @s: the tings
 */
void _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		count++;
		_strlen_recursion(s + 1);
	}
}
