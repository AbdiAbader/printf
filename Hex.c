#include "main.h"
/**
 *prente_X - prints in hexadecimal upper case
 *@args: argument passed from _printf functions
 *Return: number of print
 */
int prente_X(va_list args)
{
unsigned int x, count = 0, num, i, tmp;
int *hold;
int y;
num = va_arg(args, unsigned int);
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
hold[i] = tmp + 55;
}
for (y = count; y >= 0; y--)
{
_putchar(hold[y]);
}
return (count);
}
/**
 *prente_x - prints in hexadecimal lower case
 *@args: argument passed from _printf functions
 *Return: number of print
 */
int prente_x(va_list args)
{
  unsigned  int x, count = 0, num,i;
 int tmp , y;
  int *hold;
  num = va_arg(args, unsigned int);
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
for (y = count - 1; y >= 0; y--)
_putchar(hold[y]);
return (count);
}
