#include "main.h"
/**
 * _putchar - prints a single char.
 * @c: char to be printed.
 *
 * Description: Prints a single char.
 *
 * Return: a char.
 */
int _putchar(char c);
{
	putchar(c);
	return (c);
}
/**
 * print_alphabet_x10 - prints lowercase alphabets.
 *
 * Description: Prints 10 tmes the alphabets.
 *
 * Return: 10 times the lowercase alphabets.
 */
void print_alphabet_x10(void);
{
	char letter = 'a';
	int repetitions = 10;

	while (repetitions < 10)
	{
		while(letter <= 'z')
		{
		_putchar(letter);
		letter ++;
		}
		letter = 'a';
		repetitions++;
		if (repetitions < 10)
			_putchar('\n');
	}
	return (0);
}
