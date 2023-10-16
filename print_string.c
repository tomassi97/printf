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
