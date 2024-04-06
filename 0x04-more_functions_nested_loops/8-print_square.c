#include "main.h"
/**
 * print_square - prints a square
 * @space: space for the square
 * Return: A square
 */
void print_square(int space)
{
	if (space <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int row = 0; row < space; ++row)
	{
		for (int col = 0; col < space; ++col)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
