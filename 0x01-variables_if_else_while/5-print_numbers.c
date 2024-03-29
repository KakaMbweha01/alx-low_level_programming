#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - Print single digit numbers
 * Return - Always (Success)
 */
int main(void)
{
  char n = '0';

  while (n <= '9')
  {
    putchar(n);
    n++;
  }
  return (0);
}
