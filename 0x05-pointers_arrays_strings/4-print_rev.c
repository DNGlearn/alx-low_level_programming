#include "main.h"
/**
 * print_rev - function reverses a string
 * @*s: this is the pointer that is pointing to a string
 * @s: the chars
 */
void print_rev(char *s)
{
	int length;
	int o;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	s--;
	for (o = length; o > 0; o--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
