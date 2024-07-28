#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size: size of # to use
 * Return: A triangle
 */
void print_triangle(int size)
{
	int g,h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < size; g++)
		{
			for (h =0; h < size; h++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
