#include"main.h"
#include<stdio.h>
/**
 * main - side piece
 * Return: 0
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
}
