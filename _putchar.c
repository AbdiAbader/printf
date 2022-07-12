#include <unistd.h>
#include "main.h"
/**
 *_putchar - prints one char at a time
 *@c: character
 *Return: 1 or c or -1 if fails
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
