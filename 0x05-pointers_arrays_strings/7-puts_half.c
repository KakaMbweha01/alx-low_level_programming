#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - print half of string
 * @str: Accepts a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int h;

	int start_indexer = (len % 2 == 0) ? len / 2 : n + 1;

	for (int h = start_indexer; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}

