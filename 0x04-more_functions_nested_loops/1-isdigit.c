#include "main.h"
/**
 * _isdigit - checks whether a char is a digit.
 * @c: accepts a char.
 * Return: 1 if digit else return 0.
 */
int _isdigit(int c)
{
	while (1)
	{
		if (c >= '0' && c <= '9')
		{
			return 1;
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			{
				return 0;
			}
	}
}
