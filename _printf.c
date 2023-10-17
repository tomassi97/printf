#include "main.h"

/**
 * _printf - prints the input arguments to stdout
 * as specified by the format
 * @format: Contains the specifier to print the args
 * specified
 * Return: Returns the count of characters printed to
 * stdout
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			/*choose_format function*/
			count += choose_format(args, *++format);
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
