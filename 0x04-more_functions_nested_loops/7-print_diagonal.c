#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 0;
	while (row < n)
	{
		space = 0;
		while (space < row)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
}
