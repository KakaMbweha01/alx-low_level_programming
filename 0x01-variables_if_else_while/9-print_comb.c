#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - Print possible combinations of single-digit numbers
 * Return - Always (Success)
 */
int main()
{
  for (int c = 0; c <= 9; c++)
  {
    for (int z = 0; z <= 9; z++)
    {
      putchar('0' + c);
      putchar(z == 9 ? '\n' : ',');
      putchar(z == 9 ? '\0' : ' ');
    }
  }
  return (0);
