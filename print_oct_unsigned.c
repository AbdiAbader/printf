#include "main.h"
/**
 *prente_o - prints in oct format
 *@args: argumenrs
 *Return: print numbers
 */
int prente_o(va_list args)
{
int i;
int *hold;
int count = 1;
unsigned int num = va_arg(args, unsigned int);
unsigned int temp = num, x;
for (x = num; x > 0; x = x / 8)
count++;
hold = malloc(count * sizeof(int));
for (i = 0; i < count - 1; i++)
{
hold[i] = temp % 8;
temp /= 8;
}
count--;
 for (i = count - 1; i >= 0; i--)
_putchar(hold[i] + '0');
free(hold);
return (count);
}
/**
 *prente_u - prints in oct format
 *@args: argumenrs
 *Return: print numbers
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
