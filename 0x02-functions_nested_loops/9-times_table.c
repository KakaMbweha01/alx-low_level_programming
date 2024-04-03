#include "main.h"
/**
 * _putchar - prints a single char.
 * @c: accepts a single char.
 *
 * Description: print a char.
 *
 * Return: a char.
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
/**
 * times_table - creates a multiplication table from 0-9.
 *
 * Description: prints the 9 timestable.
 *
 * Return: multiples for each digit from 0-9 in column and row form.
 */
void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		int col = 0;

		while (col <= 9)
		{
			int answer = row * col;
			_putchar("%d", answer);

			if (col < 9)
			{
				_putchar(", ");
			}
			col++;
		}
		_putchar("\n");
		row++;
	}
}
