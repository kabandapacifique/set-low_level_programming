#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: The string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
