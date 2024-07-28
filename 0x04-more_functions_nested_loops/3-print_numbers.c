#include "main.h"
/**
 * print_numbers - print single digit numbers
 * Return: digit numbers
 */
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int g;

	for (g = 0; g <= 11; g++)
	{
		_putchar(numbers[g]);
	}
	_putchar('\n');
}
