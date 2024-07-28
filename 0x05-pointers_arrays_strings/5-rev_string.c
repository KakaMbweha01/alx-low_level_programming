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
	int size = 0;
	int t;

	while (s[size] != '\0')
	{
		size++;
	}
	for (t = size - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}
}




