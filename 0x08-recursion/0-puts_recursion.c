#include "main.h"
/**
 * void _puts_recursion - the function
 * @s: the deets babyyy
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	} else
	{
		_putchar('\n');
	}
}
