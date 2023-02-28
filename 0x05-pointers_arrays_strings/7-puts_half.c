#include "main.h"
/**
 *
 */
void puts_half(char *str)
{
	int count = 0;
	int j;

	int i = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	i = count / 2;
	for (j = 0; j <= count; j++)
	{
		if (j > i)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
