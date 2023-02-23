#include "main.h"
/**
 * print_most_numbers - displays no. other than 2 n 4
 * Return: nada
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' || c !='4')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
