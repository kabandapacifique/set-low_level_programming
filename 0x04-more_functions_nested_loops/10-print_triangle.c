#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 1;
	while (row <= size)
	{
		col = 0;
		while (col < size - row)
		{
			_putchar(' ');
			col++;
		}
		col = 0;
		while (col < row)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
