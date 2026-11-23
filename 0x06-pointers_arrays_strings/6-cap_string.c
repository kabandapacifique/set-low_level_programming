#include "main.h"

/**
 * is_sep - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';')
	{
		return (1);
	}
	if (c == '.' || c == '!' || c == '?' || c == '"' || c == '(')
	{
		return (1);
	}
	if (c == ')' || c == '{' || c == '}')
	{
		return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to change
 *
 * Return: A pointer to s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || is_sep(s[i - 1]))
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
