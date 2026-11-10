#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;
	int prod;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			prod = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				{
					_putchar(' ');
				}
			}
			if (prod >= 10)
			{
				_putchar('0' + prod / 10);
			}
			_putchar('0' + prod % 10);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
