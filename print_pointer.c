#include "main.h"
#include <stdlib.h>

/**
 * print_octal - A function that prints an unsigned int in octal notation
 * @ui: unsigned int to print in octal notation
 * Return: number of printed digits
 */
int print_octal(unsigned int ui)
{
	unsigned int a[11];
	unsigned int j = 1, m = 1073741824, sum = 0;
	int counter;

	a[0] = ui / m;
	for (; j < 11; j++)
	{
		m /= 8;
		a[j] = (ui / m) % 8;
	}
	for (j = 0; j < 11; j++)
	{
		sum += a[j];
		if (sum || j == 10)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}


/**
 * print_pointer - A function that prints an address
 * @point: address to print
 * Return: number of printed characters
 */
int print_pointer(unsigned long point)
{
	int counter = 0;
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long m = 1152921504606846976;
	char *str = "(nil)";

	if (point == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;

	a[0] = point / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (point / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_reverse - A function that prints a string in reverse
 * @r: string to print in reverse
 * Return: number of printed characters
 */
int print_reverse(char *str)
{
	int i = 0, counter = 0;

	if (str == NULL)
		str = ")llun(";
	while (str[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}
