#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse of a string
 * @s: Accepts a string
 * Return: Always 0
 */
int h;
void print_rev(char *s)
{
	int size = strlen(s);

	for (int h = size - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}



