#include<stdio.h>
/**
 * main - yo main
 * Return: 0
 */
int main (void)
{
	char lower;

	lower = 'a';
	while
		(lower <= 'z')
		{
			if(lower != 'q' && lower != 'e')
			{
				putchar(lower);
			}
			lower++;
		}
	putchar('\n');
	return (0);
}
