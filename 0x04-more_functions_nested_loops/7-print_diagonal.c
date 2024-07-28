#include "main.h"
/**
 * print_diagonal - produce a diagonal
 * @n: accepts the number of \\
 * Return: Always
 */
void print_diagonal(int n)
{
	int r,t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (t = 0; t < size; t++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
		}
	}
}
