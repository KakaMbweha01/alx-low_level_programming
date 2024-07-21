#include "main.h"
/**
 * print_diagonal - produce a diagonal
 * @n: accepts the number of \\
 * Return: Always
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int k = 0; k < n; k++)
		{
			for (int j = 0; j < n; j++)
			{
				_putchar('\')
				}
				_putchar('\n');
		}
	}
}