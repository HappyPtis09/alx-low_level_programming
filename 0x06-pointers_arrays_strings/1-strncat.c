/**
 * _strncat - concatenates two strings up to n bytes.
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of bytes to concatenate from src.
 *
 * Return: pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	char *end = dest;

	while (*end != '\0')
	{
		end++;
		len++;
	}

	while (*src != '\0' && n-- > 0)
	{
		*end++ = *src++;
		len++;
	}

	if (n > 0)
	{
		*end = '\0';
		return (dest);
	}
}
