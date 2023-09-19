#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int printf_pent(va_list args_box);
int printf_line(va_list args_box);
int printf_cht(va_list args_box);
int _printf(const char *format, ...);
int printf_dint(va_list args_con);

#endif
