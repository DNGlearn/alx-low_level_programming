#include "main.h"
/**
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
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
