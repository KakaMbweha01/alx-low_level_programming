#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - print alphabets in both lower and uppercase
 * Return - Always (Success)
 */
int main (void)
{
  char lower = 'a';
  char upper = 'A';
  while (lower <= 'z')
  {
    putchar(lower);
    lower++;
  }
  while (upper <= 'Z')
  {
    putchar(upper);
    upper++;
  }
  putchar('\n');
  return (0);
