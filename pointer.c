#include "main.h"
/**
 * prente_po - p.
 * @args: arguments of function.
 * Return: printed numbers.
 */
int prente_po(va_list args)
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
b = prente_xx(a);
return (b + 2);
}
/**
 *prente_xx- prints in hexadecimal lower case
 *@args: argument passed from _printf functions
 *Return: number of print
 */
int prente_xx(unsigned long int num)
{
  long int x, y, count = 0, i;
  int tmp;
  int *hold;
  for (x = num; x > 0; x = x / 16)
    count++;
  hold = malloc(sizeof(int) * count + 1);
  if (hold == NULL)
    {
      free(hold);
      return (-1);
    }
  x = num;
  for (i = 0; i < count; i++)
    {
      tmp = x % 16;
      x /= 16;
      if (tmp < 10)
	hold[i] = tmp + 48;
      else
	hold[i] = tmp + 87;
    }
  for (y = count; y >= 0; y--)
    _putchar(hold[y]);
return (count);
}
