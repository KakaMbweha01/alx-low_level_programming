#include "main.h"
/**
 * _putchar - accepts a single char
 * @c: a single char
 *
 * Description: Prints a single char.
 *
 * Return: returns a char.
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
/**
 * print_last_digit - prints the last digit in a number.
 * @y: accepts an int.
 *
 * Description: will print the final digit of a num.
 *
 * Return: returns the last digit.
 */
int print_last_digit(int y)
{
	int last = y % 10;
	return last;
}
