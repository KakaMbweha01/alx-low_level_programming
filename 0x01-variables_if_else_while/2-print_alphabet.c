#include <stdio.h>
/*
 * main - Entry point
 *
 * Description - Print alphabets in lowercase
 * Return - Always (Success)
 */
int main (void)
{
  char letter = 'a';
  while (letter <= 'z')
  {
    putchar(letter);
    letter++;
  }
  putchar('\n');
  return (0);
