#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints first 50 fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */ 
int main(void)
{
	int k = 50;
	int num0 = 1;
	int num1= 2;
	int nextTerm;

	printf("%d, %d, ", num0, num1);
	int counter = 2;
	
	while (counter < n)
	{
		nextTerm = num0 + num1;
		printf("%d", nextTerm);
	
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
			

			
