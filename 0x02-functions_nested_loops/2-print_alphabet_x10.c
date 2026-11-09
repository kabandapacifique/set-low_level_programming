#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int row;
	char letter;

	row = 0;
	while (row < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		row++;
	}
}
