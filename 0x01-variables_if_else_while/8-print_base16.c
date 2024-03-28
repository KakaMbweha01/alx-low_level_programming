#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - print base 16 values in lowercase
 * Return - Always (Success)
 */
int main()
{
  for (int b = 0; b < 16; b++)
  {
    if (b < 10)
      putchar('0' + b);
    else
      putchar('a' + (b - 10));
  }
  putchar('\n');
  return (0);
}
