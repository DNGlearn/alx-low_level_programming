/**
 * _strlen - function gets the string lenght
 * @*str: pointer to string of length to get
 * @count: the count
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
