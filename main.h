#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
int _putchar(char c);
int _printf(const char *format, ...);
int choose_format(va_list args, char type);
int print_string(char *input_str);

int print_numbers(long num);

int print_binary(unsigned int n);
#endif
