#include "main.h"
#include<stdio.h>
/**
 *
 */
void puts_half(char *str)
{
	int a, b, c;

	for (a = 0; str[a] != '\0'; a++)
	{
		c++;
	}

	b = (c / 2);
	
	for (a = 0; a < c; a++)
	{
		if (c % 2 == 1)
		{
			b = (c + 1) / 2;
		}
		if (a > b)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
