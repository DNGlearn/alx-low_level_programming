#include "main.h"
/**
 * _print_rev_recursion - the func
 * @s: s characters of string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
