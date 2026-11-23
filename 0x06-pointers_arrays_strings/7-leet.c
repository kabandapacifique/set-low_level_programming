#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: A pointer to s
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";
	int i;
	int k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (k < 10)
		{
			if (s[i] == letters[k])
			{
				s[i] = codes[k];
			}
			k++;
		}
		i++;
	}
	return (s);
}
