#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * printf_pent - Printing a percent sign ("%") to the standard output.
 * @args_box: the va_list which has the arguments.
 *
 * Return: The lenth of characters printed (1).
 */

int printf_pent(va_list args_box)
{
	(void)args_box;
	return (write(1, "%", 1));
}
