#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints a combination of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g = 0;
	int f = 1;

	while (g < 9)
	{
		while (f <= 9)
		{
			putchar(g + '0');
			putchar(f + '0');
			if (g != 8 || f != 9)
			{
				putchar(',');
				putchar(' ');
			}
			f++;
		}
		g++;
		f = g + 1;
	}
	return (0);
}
