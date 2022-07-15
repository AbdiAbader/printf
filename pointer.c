#include "main.h"
/**
 * prente_p - p.
 * @args: arguments of function.
 * Return: printed numbers.
 */
int prente_p(va_list args)
{
  void *p;
  char *s = "(nil)";
  long int a;
  int b;
  int i;
  p = va_arg(args, void*);
  if (p == NULL)
    {
      for (i = 0; s[i] != '\0'; i++)
	{
	  _putchar(s[i]);
	}
      return (i);
    }
  a = (unsigned long int)p;
  _putchar('0');
  _putchar('x');
  b = prente_x(a);
  return (b + 2);
}
