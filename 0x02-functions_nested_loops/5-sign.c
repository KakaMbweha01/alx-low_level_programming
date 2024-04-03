#include "main.h"
/**
 * print_sign - prints a sign for a number.
 * @n: accepts a single int.
 *
 * Description: checks if a number is positive.
 *
 * Return: 1 if positive 0 if zero and -1 f negative.
 */
int print_sign(int h)
{
	if (h > 0)
	{
		_putchar(43);
		return (1);
	} else if (h == 0)
	{
		_putchar(48);
		return (0);
	} else
	{
		_putchar(45);
		return (-1);
	}
}
