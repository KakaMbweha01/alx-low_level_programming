#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: Accept a string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int size = strlen(s);
	int t, y;
	char placer;

	for (t = 0, y = size -1; t < y; t++-, y--)
	{
		placer = s[t];
		s[t] = s[y];
		s[y] = placer;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}