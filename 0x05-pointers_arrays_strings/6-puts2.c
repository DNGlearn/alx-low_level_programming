#include "main.h"
/**
 * puts2 - the func
 */
void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	while (i <= count)
	{
		if (i % 2 == 1)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
