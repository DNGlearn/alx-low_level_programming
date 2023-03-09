#include "main.h"
/**
 * @s: s tings
 * _print_rev_recursion - the func
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
