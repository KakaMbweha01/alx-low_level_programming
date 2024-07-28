#include "main.h"
/**
 * print_square - prints a square
 * @size: space for the square
 * Return: A square
 */
void print_square(int size)
{
	int r,t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (t = 0; t < size; t++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
