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
		return (count + print_numbers(-1 * num));
	}
	else if (num < 10)
	{
		return (count + _putchar(num_chars[num]));

	}
	else
	{
		count += _putchar(num_chars[num / 10]);
		return (count + _putchar(num_chars[num % 10]));
	}
}

