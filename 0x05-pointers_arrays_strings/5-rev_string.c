/**
 * rev_string - func reverse array
 * @*s: ting
 * @s: tings
 */
void rev_string(char *s)
{
	char a[10];
	int b;
	int t;

	t = 0;
	b = 0;
	while (s[t] != '\0')
	{
		a[b] = s[t];
		b++;
		t++;
	}
	s = a;
}
