#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - print alphabets in reverse
 * Return - Always (Success)
 */
int main()
{
  for (char ch = 'z'; ch >= 'a'; ch--)
  {
    putchar(ch);
  }
  putchar('\n');
  return (0);
