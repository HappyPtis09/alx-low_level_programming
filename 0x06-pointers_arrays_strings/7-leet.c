/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *alphabet = "AEOTL";
	char *numbers = "43071";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (str[i] == alphabet[j] || str[i] == alphabet[j] + 32)
			{
				str[i] = numbers[j];
			}
		}
	}

	return (str);
}
