#include "main.h"
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
			_putchar((char)"%02d:%02d\n", hours, minutes);
			minutes++;
		}
		hours++;
	}
}
