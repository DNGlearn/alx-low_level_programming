#include<stdio.h>
/**
 * main - no you can't save
 * Return:0
 */
int main(void)
{
	int a;

	a = 0;
	while
		(a<10)
		{
			putchar(a + '0');
			if(a < 9)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
	putchar('\n');
	return 0;
}
