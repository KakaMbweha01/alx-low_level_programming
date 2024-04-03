#include "main.h"
/**
 * _putchar - accepts a single char.
 * @c: Accepts a char.
 *
 * Description: prints a char.
 *
 * Return: A char.
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
/**
 * jack_bauer - print every minute.
 *
 * Description: Prints every minute of the day.
 *
 * Return: prints in format hh:mm.
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int minutes = 0;

		while (minutes < 60)
		{
			_putchar("%02d:%02d\n", hours, minutes);
			minutes++;
		}
		hours++;
	}
}
