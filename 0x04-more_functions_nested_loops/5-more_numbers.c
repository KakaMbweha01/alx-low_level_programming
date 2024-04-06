#include "main.h"
/**
 * more_numbers - prints numbers 0-14
 * Result: iterate 10 times
 */
void more_numbers(void)
{
	int iteration = 0;
	while (iteraton < 10)
	{
		int h = 0;
		while (h <= 14){
			if (h >= 10){
				_putchar('0' + h / 10);
			}
			_putchar('0' + h % 10);
			h++;
		}
		_putchar('\n');
		iteration++;
	}
}
