#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - print the alphabetss except q and e
 * Return - Always (Success)
 */
int main ()
{
  for (char ch = 'a'; ch <= 'z'; ch++)
  {
    if (ch != 'q' && ch != 'e')
    {
      putchar(ch);
    }
  }
  putchar('\n');
  return (0);
}
