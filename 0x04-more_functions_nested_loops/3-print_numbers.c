#include "main.h"
/**
 * print_numbers - print single digit numbers
 * Return: digit numbers
 */
void print_numbers(void)
{
	int g = 0;

	while (g <= 9)
	{
		_putchar(g + '0');
		g++;
	}
	_putchar('\n');
}
