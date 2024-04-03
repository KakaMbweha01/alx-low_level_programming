#include "main.h"
/**
 * _putchar - prints in a single char.
 * @c: char to be printed.
 *
 * Description: Prints a single character.
 *
 * Return: returns a char.
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
/**
 * _islower - checks if a char is lowercase.
 * @c: char to be checked.
 *
 * Description: prints 1 if its lowercase otherwise prints 0.
 *
 * Return: 1 if its lowercase 0 if its not.
 */
int _islower(int c)
{
	if ( c >= 'a' && c <='z')
	{
		return 1;
	} else {
		return 0;
	}
}
