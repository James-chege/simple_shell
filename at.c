/**
 * i_Delimiter - Check if a character is a delimiter.
 * @n: The character to be checked.
 * @delimiters: The string containing delimiters.
 * Return: 1 if 'n' is a delimiter, 0 otherwise.
 */
int i_Delimiter(char n, const char *delimiters)
{
	while (*delimiters)
	{
		if (*delimiters == n)
		{
			return (1);
		}
		delimiters++;
	}
	return (0);
}
