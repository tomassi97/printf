#include "main.h"

/**
 * choose_format - Function chooses format of the argument
 * passed to it
 * @args : list of the variables argments
 * @type : format of argument
 * Return: number of char printed
 */
int choose_format(va_list args, char type)
{
	int count = 0;

	if (type == 'c')
	{
		_putchar(va_arg(args, int));
		count = count + 1;
	}
	else if (type == 's')
	{
		count += print_string(va_arg(args, char *));
	}
	else if (type == '%')
	{
		count += _putchar('%');
	}
	else if ((type == 'd') || (type == 'i'))
	{
		count += print_numbers((long)(va_arg(args, int)));
	}
	else if (type == 'b')
		count += print_binary(va_arg(args, unsigned int));
	else if (type == 'u')
		count += print_unsigned_int(va_arg(args, unsigned int));
	else if (type == 'x')
		count += print_numbers_x(va_arg(args, unsigned int), 0);
	else if (type == 'X')
		count += print_numbers_x(va_arg(args, unsigned int), 1);
	else if (type == 'o')
		count += print_octal(va_arg(args, unsigned int));
	else if (type == 'p')
		count += print_pointer(va_arg(args, unsigned long point));
	else if (type == 'r')
		count += print_reverse(va_arg(args, char *str));
	else if (type == '%')
		count += _putchar('%');
	else
		return (-1);
	return (count);
}
