#include "main.h"

/**
 * _printf - Producing an output according to a format.
 * @format: A character string for the program
 *
 * Return: Number of characters printed or -1 if unsuccessful.
 */

int _printf(const char *format, ...)
{
	int vicount = 0, idx = 0;
	va_list args_box;

	if (format == NULL)
		return (-1);

	va_start(args_box, format);

	while (format[idx] != '\0')
	{
		if (format[idx] != '%')
		{
			write(1, &format[idx], 1);
			vicount++;
		}
		else
		{
			idx++;
			if (format[idx] == 'c')
				vicount += printf_cht(args_box);
			else if (format[idx] == 's')
				vicount += printf_line(args_box);
			else if (format[idx] == '%')
			{
				write(1, "%", 1);
				vicount++;
			}
			else if (format[idx] == 'd' || format[idx] == 'i')
				vicount += printf_dint(args_box);
		}
		idx++;
	}

	va_end(args_box);

	return (vicount);
}
