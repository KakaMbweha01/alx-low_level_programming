#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - print single digits using putchar
 * Return - Always (Success)
 */
int main()
{
  for (int n = 0; n < 10; n++)
  {
    putchar('0' + n);
  }
  putchar('\n');
  return (0);
}
