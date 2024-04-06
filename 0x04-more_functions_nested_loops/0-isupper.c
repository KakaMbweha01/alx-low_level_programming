#include "main.h"
/**
 * _isupper - checks whether a char is an uercase letter.
 * @c: accepts a char.
 * Return: 1 f upper else 0 if lower.
 */
int _isupper(int c)
{
	while (1)
	{
		if (c >= 'A' && c <= 'Z')
		{
			return 1;
		}
		else if (c >= 'a' && c <= 'z')
		{
			return 0;
		}
	}
}
