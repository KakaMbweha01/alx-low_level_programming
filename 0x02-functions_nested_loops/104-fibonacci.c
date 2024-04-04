#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints first 98 fib.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 98;
	unsigned long long num0 = 1;
	unsigned long long num1 = 2;
	unsigned long long nextTerm;

	printf("%llu, %llu, ", num0, num1);

	int counter = 2;

	while (counter < m)
	{
		nextTerm = num0 + num1;
		printf("%llu", nextTerm);

		if (counter != n - 1)
		{
			printf(", ");
		}
		num0 = num1;
		num1 = nextTerm;
		counter++;
	}
	printf("\n");
	return 0;
}
