#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse of a string
 * @s: Accepts a string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int h;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (h = length - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}




