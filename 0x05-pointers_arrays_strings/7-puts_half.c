#include "main.h"
#include<stdio.h>
/**
 * puts_half - yo boi skinny ..
 * @str: i love you b
 */
void puts_half(char *str)
{
	int a, b, c, z;

	for (a = 0; str[a] != '\0'; a++)
	{
		c++;
	}
	b = (c / 2);
	for (z = 0; z < c; z++)
	{
		if (c % 2 == 1)
		{
			b = (c + 1) / 2;
		}
		if (z > b)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
