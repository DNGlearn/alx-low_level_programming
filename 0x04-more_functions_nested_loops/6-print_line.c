#include "main.h"
/**
 * print_line - drawin a line innit
 * @n: no of lines
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		for (i = 1; 1 <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
