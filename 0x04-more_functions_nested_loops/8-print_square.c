#include "main.h"
/**
 * print_square - prints a square
 * @size: space for the square
 * Return: A square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int r = 0; r < size; r++)
		{
			for (int t = 0; t < size; t++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
