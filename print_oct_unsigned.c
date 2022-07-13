#include "main.h"
/**
 *prente_o - prints in oct format
 *@args: argumenrs
 *Return: print numbers
 */
int prente_o(va_list args)
{
long int decimal, times = 0, x, y, count = 0, num;
int tmp;
char s;
num = va_arg(args, long int );
for (x = num; x > 0; x = x / 8)
{
tmp = x % 8;
times = times * 100 + tmp;
}
for (y = times; y > 0; y = y / 100)
{
s = y % 100;
putchar(s + '0');
count++;
}
return (count);
}
int prente_u(va_list args)
{
  return (9);
}
