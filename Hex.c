#include "main.h"
/**
 *prente_X - prints in hexadecimal upper case
 *@args: argument passed from _printf functions
 *Return: number of print
 */
int prente_X(va_list args)
{
long int decimal, times = 0, x, y, count = 0, num;
int tmp;
char s;
num = va_arg(args, long int);
for (x = num; x > 0; x = x / 16)
{
tmp = x % 16;
if (tmp < 10)
tmp = tmp + 48;
else
tmp = tmp + 55;
times = times * 100 + tmp;
}
for (y = times; y > 0; y = y / 100)
{
s = y % 100;
_putchar(s);
count++;
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
long int decimal, times = 0, x, y, count = 0, num;
int tmp;
char s;
num = va_arg(args, long int);
for (x = num; x > 0; x = x / 16)
{
tmp = x % 16;
if (tmp < 10)
tmp = tmp + 48;
else
tmp = tmp + 55;
times = times * 100 + tmp;
}
for (y = times; y > 0; y = y / 100)
{
s = y % 100;
if (s > 57)
s += 32;
_putchar(s);
count++;
}
return (count);
}
