#include "main.h"
/**
 * print_square - print a flat cube
 * @size: big man ting yeah
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		int i, j;

		for (i = 0; i < size; j++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}