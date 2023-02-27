/**
 * swap_int - function switches the numbers
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
