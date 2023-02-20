#include<stdio.h>
/**
 * main - is my boy packin
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while
		(x < 10)
		{
			for (y = 0;y < 10;y++)
			{
				putchar("%d%d",x,y);
			}
			if (x != 8 || y != 9)
			{
				putchar(", ");
			}
		}
	return (0);
}
