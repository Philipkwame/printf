#include "main.h"
/**
 * printf_cht - Prints a character to the standard output.
 * @args: this va_list contains the character to be printed.
 *
 * Return: The number of characters printed (1).
 */

int printf_cht(va_list args)
{
	char cht = va_arg(args, int);

	_putchar(cht);

	return (1);
}

/**
 * printf_pent - Printing a percent sign ("%") to the standard output.
 * @args: the va_list which has the arguments.
 *
 * Return: The lenth of characters printed (1).
 */

int printf_pent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}

/**
 * printf_line - Printing a string to the standard output.
 * @args: A va_list that contains the string to be printed.
 *
 * Return: The total amount of characters printed.
*/
int printf_line(va_list args)
{
	char *trs = va_arg(args, char *);

	int i = 0;

	if (trs == NULL)
	{
		 while ("(null)"[i] != '\0')
		 {
			 _putchar("(null)"[i]);
			 i++;
		 }
		 return (i);
	}
	while (trs[i] != '\0')
	{
		_putchar(trs[i]);
		i++;
	}

	return (i);
}


/**
 * printf_dint - Printing an integer to the standard output.
 * @args: the va_list containing the integer to be printed.
 *
 * Return: characters to be printed.
 */

int printf_dint(va_list args)
{
	int num = va_arg(args, int);
	char arr[1024];
	int count = 0;
	int i = 0;
	int j;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		/*_putchar('0' + (num % 10));*/
		arr[i] = num % 10 + '0';
		num /= 10;
		count++;
		i++;
	}
	arr[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j]);
	}
	return (count);
}
