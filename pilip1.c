#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * printf_cht - Prints a character to the standard output.
 * @args_box: this va_list contains the character to be printed.
 *
 * Return: The number of characters printed (1).
 */

int printf_cht(va_list args_box)
{
	char cht = va_arg(args_box, int);

	return (putchar(cht));
}
