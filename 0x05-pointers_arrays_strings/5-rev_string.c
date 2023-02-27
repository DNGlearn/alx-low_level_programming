/**
 * rev_string - func reverse array
 * @*s: ting
 * @s: tings
 */
void rev_string(char *s)
{
	char a[10];
	int b;

	b = 9;
	while (*s != '\0')
	{
		a[b] = s++;
		b--;
	}
	s = a;
}
