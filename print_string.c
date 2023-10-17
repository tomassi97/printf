#include "main.h"

/**
 * print_string - prints a string input using
 * putchar
 * @input_str: input string to be printed
 * Return: counts of characters printed
 */

int print_string(char *input_str)
{
	int char_count = 0;

	while (*input_str != '\0')
	{
		_putchar((int)*input_str);
		char_count = char_count + 1;
		input_str++;
	}
	return (char_count);
}

/**
 * print_numbers - prints numbers passed in as arguments
 * @num: passed numbers to be printed
 * Return: counts of numbers printed
 */

int print_numbers(long num)
{
	int count = 0;
	char *num_chars;

	num_chars = "0123456789";
	if (num < 0)
	{
		count += _putchar('-');
		return (count + print_numbers(-num));
	}
	else if (num < 10)
	{
		return (count + _putchar(num_chars[num]));

	}
	else
	{
		count += print_numbers(num / 10);
		return (count + print_numbers(num % 10));
	}
}

/**
 * print_binary - A function that prints an unsigned int in binary notation
 * @n: unsigned int to print
 * Return: number of printed digits
 */
int print_binary(unsigned int n)
{
	unsigned int m = 2147483648, j = 1, sum = 0;
	unsigned int a[32];
	int counter = 0;

	a[0] = n / m;

	for (; j < 32; j++)
	{
		m /= 2;
		a[j] = (n / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
