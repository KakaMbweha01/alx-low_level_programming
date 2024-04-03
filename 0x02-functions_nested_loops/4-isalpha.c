#include "main.h"
/**
 * _putchar - takes a single char.
 * @c: accepts a single char
 *
 * Description: returns a single char
 *
 * Return: A char.
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
/**
 * _isalpha - checks if its an alphabetic char.
 * @c: takes a single char.
 *
 * Description: if a char is alphabetic returns 1 otherwise 0
 *
 * Return: 1 if alphabetic 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <='z') || (c >='A' && c <='Z'))
	{
		return 1;
	} else {
		return 0;
	}
}
