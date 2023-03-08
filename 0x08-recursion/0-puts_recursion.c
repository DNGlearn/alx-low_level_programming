#include "main.h"
/**
 * void _puts_recursion - the function
 * @s: the deets babyyy
 * @i: array count
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
