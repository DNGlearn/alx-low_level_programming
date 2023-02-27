/**
 * _strlen - function gets the string lenght
 * @*s: pointer to string of length to get
 * @s: members of s
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
