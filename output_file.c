#include "main.h"

/**
 * process_format - Analyzing the  format specifiers in a string.
 * @format: The input string containing format specifiers.
 * @confun_list: An array of structs defining format specifiers.
 * @args: The variable argument list.
 *
 * Return: The count characters printed (excluding null terminator) on success.
 *     -1 on error, and it may lead to program termination in critical errors.
 */
int process_format(const char *format, c_nvert confun_list[], va_list args)

{
	int i, j, result, output_ch;

	output_ch = 0;

	for (i = 0; format[i] != '\0'; i++) /* Iterate through the main string */
	{
	if (format[i] == '%') /* Check for format specifiers */
	{
	/* Iterate through the struct to find the right function */
	for (j = 0; confun_list[j].fsymbols != NULL; j++)
	{
	if (format[i + 1] == confun_list[j].fsymbols[0])
	{
	result = confun_list[j].fun(args);
	if (result == -1)
	return (-1);
	output_ch += result;
	break;
	}
	}
	if (confun_list[j].fsymbols == NULL && format[i + 1] != ' ')
	{
	if (format[i + 1] != '\0')
	{
	_putchar(format[i]);
	_putchar(format[i + 1]);
	output_ch += 2;
	}
	else
	return (-1);
	}
	i = i + 1; /* Update i to skip format symbols */
	}
	else
	{
	_putchar(format[i]); /* Call the _putchar function */
	output_ch++;
	}
	}
	return (output_ch);
	}
