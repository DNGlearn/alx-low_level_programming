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
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
