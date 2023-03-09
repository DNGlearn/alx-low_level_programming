#include "main.h"
/**
 * void _puts_recursion - the function
 * @s: the deets babyyy
 * @i: array count
 */
void _puts_recursion(char *s)
{
	int i = 0;
	char p = *s;

	if (*s[i] != '\0')
	{
		_putchar(p[i]);
		return (_puts_recursion(p[i+1]));
	}
}
