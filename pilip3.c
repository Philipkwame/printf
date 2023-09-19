#include <stdarg.h>
#include <unistd.h>
/**
 * printf_line - Printing a string to the standard output.
 * @args_box: A va_list that contains the string to be printed.
 *
 * Return: The total amount of characters printed.
 */

int printf_line(va_list args_box)
{
	char *trs = va_arg(args_box, char *);
	int i = 0;

	while (trs[i] != '\0')
	{
		write(1, &trs[i], 1);
		i++;
	}
	return (i);
}
