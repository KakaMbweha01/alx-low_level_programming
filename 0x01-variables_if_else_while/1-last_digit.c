#include <stdlib.h>
#include <time.h>
/** more headers goes there */
#include <stdio.h>
/** betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: determine the value of the last digit
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit  > 5)
	{
		printf(" and is greater than 5\n");
	} else if (last_digit  == 0)
	{
		printf(" and is 0\n");
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
