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
num = va_arg(args, long int);
for (x = num; x > 0; x = x / 8)
{
tmp = x % 8;
times = times * 100 + tmp;
}
for (y = times; y > 0; y = y / 100)
{
s = y % 100;
_putchar(s + '0');
count++;
}
return (count);
}
/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int prente_u(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int num, last = n % 10, digit, exp = 1;
int  i = 1;
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num -= (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
