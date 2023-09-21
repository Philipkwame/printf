#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct convention -  mapping conversion specifiers to the functions
 * @fsymbols: The symbol for conversion specifier
 * @fun: The function corresponding to the conversion specifier
 *
 */
struct convention
{
	char *fsymbols;
	int (*fun)(va_list);
};
typedef struct convention c_nvert;

int _putchar(char c);
int printf_pent(va_list args);
int printf_line(va_list args);
int printf_cht(va_list args);
int _printf(const char *format, ...);
int printf_dint(va_list args);
int process_format(const char *format, c_nvert confun_list[], va_list args);

#endif
