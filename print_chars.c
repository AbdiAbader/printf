#include "main.h"
/**
*prente_c - prints characters
*@args: arguments
*Return: number of print
*/
int prente_c(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}
/**
*prente_s - prints string
*@args: arguments
*Return: number of print
*/
int prente_s(va_list args)
{
int i = 0;
char *p;
p = va_arg(args, char *);
if (p == NULL)
p = "(null)";
for (i = 0; p[i] != '\0'; i++)
_putchar(p[i]);
return (i);
}
/**
*prente_p - prints %
*@args: arguments
*Return: number of print
*/
int prente_p(__attribute__((unused)) va_list args)
{
_putchar('%');
return (1);
}
