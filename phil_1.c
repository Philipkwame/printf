#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * printf_dint - Printing an integer to the standard output.
 * @args_box: the va_list containing the integer to be printed.
 *
 * Return: characters to be printed.
 */
#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int printf_dint(va_list args_box)
{
int num = va_arg(args_box, int);
int count = 0;

if (num < 0)
{
putchar('-');
count++;
num = -num;
}

if (num == 0)
{
putchar('0');
return (1);
}
while (num > 0)
{
putchar('0' + (num % 10));
num /= 10;
count++;
}

return (count);
}

