#include "main.h"
/**
 * print_number - print an integer
 * @n: accept an integer
 * Return: An int
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}
	int divisor = 1;

	while (n / divisorb >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
