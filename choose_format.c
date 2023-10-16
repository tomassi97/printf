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
	return (count);
}
