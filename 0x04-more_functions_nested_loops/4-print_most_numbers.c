#include "main.h"
/**
 * print_most_numbers - print except 2 & 4
 * Return: a list of digits
 */
void print_most_numbers(void)
{
	int j = 0;
	while (j <= 9)
	{
		if(j != 2 && j !=4)
		{
			_putchar(j + '0');
		}
		j++;
	}
	_putchar('\n');
}
