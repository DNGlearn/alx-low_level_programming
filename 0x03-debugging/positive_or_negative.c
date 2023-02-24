#include "main.h"
void positive_or_negative(int i)
{
	if  (i > 0)
	{
		 printf("%d is positive", i);
		 printf("\n");
	}
	if  (i < 0)
	{
		printf("%d is negative\n", i);
		printf("\n");
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
		printf("\n");
	}
}
