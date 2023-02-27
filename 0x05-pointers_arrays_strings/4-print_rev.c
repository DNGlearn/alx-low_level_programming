#include "main.h"
/**
 * print_rev - function reverses a string
 * @*s: this is the pointer that is pointing to a string
 * @s: the chars
 */
void print_rev(char *s)
{
	int length;

	length = 0;

	while (*s != '0')
	{
		s++;
		length++;
	}
	while (length >= 0)
	{
		_putchar(*s--);
		length--;
	}
	_putchar('\n');
}
