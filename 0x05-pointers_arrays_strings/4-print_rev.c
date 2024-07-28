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
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	for (h = size - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}



