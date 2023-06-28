#include "main.h"

/**
 * print_char - Prints a character.
 * @args: va_list containing the character to print.
 * @count: Pointer to the count of characters printed.
 */

void print_char(va_list args, int *count)
{
	int c = va_arg(args, int);
	write(1, &c, 1);
	(*count)++;
}


/**
 * print_string - Prints a string.
 * @args: va_list containing the string to print.
 * @count: Pointer to the count of characters printed.
 */

void print_string(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int len = 0;

	while (s[len])
		len++;

	write(1, s, len);
	(*count) += len;
}


/**
 * print_integer - Prints an integer.
 * @args: va_list containing the integer to print.
 * @count: Pointer to the count of characters printed.
 */

void print_integer(va_list args, int *count)
{
	int num = va_arg(args, int);
	int divisor = 1;
	int digit;

	if (num < 0)
	{
		write(1, "-", 1);
		(*count)++;
		num = -num;
	}

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = num / divisor;
		write(1, &"0123456789"[digit], 1);
		(*count)++;
		num %= divisor;
		divisor /= 10;
	}
}


/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: va_list containing the unsigned integer to print.
 * @count: Pointer to the count of characters printed.
 */

void print_binary(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int flag = 0;

	while (mask)
	{
		if (num & mask)
		{
			write(1, "1", 1);
			(*count)++;
			flag = 1;
		}
		else if (flag)
		{
			write(1, "0", 1);
			(*count)++;
		}
		mask >>= 1;
	}
}


/**
 * _printf - Produces output according to a format.
 * @format: Character string containing directives.
 *
 * Return: Number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
				print_char(args, &count);
			else if (*format == 's')
				print_string(args, &count);
			else if (*format == 'd' || *format == 'i')
				print_integer(args, &count);
			else if (*format == 'b')
				print_binary(args, &count);
		}
		else
		{
			write(1, format, 1);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}

