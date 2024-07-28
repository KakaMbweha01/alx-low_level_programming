#include "main.h"
/**
 * print_diagonal - produce a diagonal
 * @n: accepts the number of \\
 * Return: Always \
 */
void print_diagonal(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
