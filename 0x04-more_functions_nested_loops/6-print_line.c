#include "main.h"
/**
 * print_line - prints _ 
 * @n: accepts a int
 * Return: a  line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
