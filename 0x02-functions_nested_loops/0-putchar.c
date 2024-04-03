#include <stdio.h>
/**
 * _putchar - prints a single char.
 * @c: char to be printed.
 *
 * Description: Prints a single charater
 *
 * Return: Char as an unsigned char cast as an int.
 */
int _putchar(char c);

/**
 * main - Entry point.
 *
 * Description: This function prints char one at a time without std lib.
 *
 * Return: Always 0.
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
int _putchar(char c)
{
	putchar(c);
	return (c);
}
