#include <stdio.h>
/**
 * print_times_table - prints a times table
 * @n: accepts an int.
 *
 * Description: prints the multiplication table for a given number.
 *
 * Return: the times table for int n.
 */
void print_time_tables(int k)
{
	if (k < 0 || k > 15)
	{
		return;
	}

	int j = 0;
	
	while (j <= 12)
	{
		int h = 0;

		while (h <= k)
		{
			printf("%4d", j * h);
			{
				if (h != k)
				{
					printf(",");
				}
				h++;
			}
			printf("\n");
			j++;
		}
	}
}
/**
 * main - Entry point.
 * 
 * Description: uses prints time table.
 *
 * Return: An times table.
 */
	int main(void)
	{
		int k = 10;
		print_times_table(k);
		return;
	}
