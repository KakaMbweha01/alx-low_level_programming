#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - print the alphabetss except q and e
 * Return - Always (Success)
 */
int main(void)
{
  char ch = 'a';

  while (ch <= 'z')
  {
    if (ch != 'q' && ch != 'e')
    {
      putchar(ch);
    }
    ch++;
   }
  putchar('\n');
  return (0);
}
