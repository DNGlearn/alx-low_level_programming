#include "main.h"
#include<unistd.h>
/**
 * _putchar - Story of O.J
 * @c: charcter
 * Return: 1
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
