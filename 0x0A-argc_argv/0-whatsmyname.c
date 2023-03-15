#include <stdio.h>
/**
 * main - the main function
 * @argv: argument vector
 * @argc: argument counter
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{	
		printf("arg[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
