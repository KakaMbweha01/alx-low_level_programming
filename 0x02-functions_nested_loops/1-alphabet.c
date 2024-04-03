#include "main.h"
/**
 * _putchar - prints a single char
 * @c: a single char.
 *
 * Description: Prints a char.
 *
 * Return: A char.
 */
int _putchar(char c);
/**
 * print_alphabet - prints the alphabets in lower case.
 *
 * Description: Prints the alphabets followed by  a new line
 *
 * Return: Alphabets in lowercase.
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}

int_putchar(char c)
{
	putchar(c);
	return (c);
}
