#include "main.h"
/**
 * _puts - function displays tings
 * @*str: the pointer to the string
 * @str: members an ish
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
