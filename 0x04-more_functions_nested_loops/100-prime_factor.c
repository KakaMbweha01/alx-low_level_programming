include "main.h"
include <stdio.h>
/**
* findlargestPrimeFactor - finds largest prime factor
* @n: accepts an int
* Return: Always 0
*/
void findLargestPrimeFactor(long long n)
{
    int i;

    while (n % 2 == 0) {
        n = n / 2;
    }
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n = n / i;
        }
    }

    if (n > 2) {
        long long largestPrimeFactor = n;
        while (largestPrimeFactor != 0) {
            int digit = largestPrimeFactor % 10;
            _putchar('0' + digit);
            largestPrimeFactor /= 10;
        }
    }
    _putchar('\n');
}

int main() {
    long long number = 612852475143;
    findLargestPrimeFactor(number);
    return 0;
}
