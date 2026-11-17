#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int row;
	int n;

	row = 0;
	while (row < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
			n++;
		}
		_putchar('\n');
		row++;
	}
}
