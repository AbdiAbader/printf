#include "main.h"
/**
 * prente_po - p.
 * @args: arguments of function.
 * Return: printed numbers.
 */
int prente_po(va_list args)
{

  unsigned long int dec, buffr;
  char c[100];
  int count, n, i;

  dec = (unsigned long int)va_arg(arg, void*);
  buffr = dec;
  count = 1;
  i = 0;

  if (!dec)
    {
      _puts("(nil)");
      return (5);
    }
  while (buffr)
    {
      buffr /= 16;
      count++;
    }
  c[count + 1] = '\0';
  while (dec > 0)
    {
      n = (dec % 16);
      if (n >= 0 && n <= 9)
	c[count] = ((char)(n + '0'));
      else
	c[count] = ((char)(n + 'W'));
      count--;
      dec /= 16;
    }
  c[0] = '0';
  c[1] = 'x';

  while (c[i] != '\0')
    {
      _putchar(c[i]);
      i++;
    }
  return (i);
}
