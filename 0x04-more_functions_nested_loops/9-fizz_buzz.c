#include <stdio.h>
/**
 * print_fuzzbuzz - print fuzzbuzz on multiples of 3 and 5 respectively
 * @n: accepts args
 * Return: FizzBuzz
 */
int main(void)
{
	int i;

	for (int i = 1; i <= 100; ++i)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
			}
			else if (n % 3 == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
				}
				else if (n % 5 == 0)
				{
					_putchar('B');
					_putchar('u');
					_putchar('z');
					_putchar('z');
					_putchar(' ');
				}
				else
				{
					_putchar(n);
				}
			}
	_putchar('\n');
	return (0);
}


