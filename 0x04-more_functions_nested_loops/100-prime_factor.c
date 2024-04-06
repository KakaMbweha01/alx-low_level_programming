#include <stdio.h>
#include <math.h>
/**
 * largest_prime - return largest of a prime number
 * @h: acccept a prime factor
 * Return: largest prime factor
 */
long long int largest_prime(long long int h)
{
	long long int largest_factor = -1;
	while (h % 2 == 0)
	{
		largest_factor = 2;
		h /= 2;
	}
	for (long long int i = 3; i <= sqrt(n); i+=2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largest_factor = n;
	}
	return largest_factor;
}
	
