#include "main.h"
/**
 * print_diagonal - produce a diagonal
 * @p: accepts the number of \\
 * Return: Always \ 
 */
void print_diagonal(int p)
{
	if (p <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int sapced;
		for (spaced = 0; spaced < p; spaced++)
		{
			for (int h = 0; h < spaced; h++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
