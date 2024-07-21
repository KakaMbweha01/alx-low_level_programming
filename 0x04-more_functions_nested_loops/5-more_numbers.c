#include "main.h"
/**
 * more_numbers - prints numbers 0-14
 * Result: iterate 10 times
 */
void more_numbers(void)
{
	for (int g = 0; g < 10; g++)
	{
		for (int f = 0; f < 15; f++)
		{
			if (f > 9)
			{
				_putchar('0' + (f / 10));
			}
			_putchar('0' + (f % 10));
		}
		_putchar('\n');
	}
}
