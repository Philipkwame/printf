#include "main.h"

/**
 * _printf - Producing an output according to a format.
 * @format: A character string for the program
 *
 * Return: Number of characters printed or -1 if unsuccessful.
 */
int _printf(const char *format, ...)
{
int output_ch;

c_nvert confun_list[] = {
{"c", printf_cht},
{"i", printf_dint},
{"%", printf_pent},
{"d", printf_dint},
{"s", printf_line},
{NULL, NULL}

};

va_list args;

if (format == NULL)
return (-1);

va_start(args, format);

/** call a  function */

output_ch = process_format(format, confun_list, args);
va_end(args);

return (output_ch);

}
