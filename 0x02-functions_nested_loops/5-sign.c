#include "main.h"
/**
 * _putchar - returns a single char
 * @c: accepts a single char.
 *
 * Description: Returns a char.
 *
 * Return: a single char.
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
/**
 * print_sign - prints a sign for a number.
 * @n: accepts a single int.
 *
 * Description: checks if a number is positive.
 *
 * Return: 1 if positive 0 if zero and -1 f negative.
 */
int print_sign(int n)
{
	if (h > 0)
	{
		_putchar("+");
		return 1;
	} else if (h == 0)
	{
		_putchar("0");
		return 0;
	} else {
		_putchar("_");
		return -1;
	}
}
