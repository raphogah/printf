#include "main.h"

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
			count += _print_argument(args, *format);
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}


/**
 * _print_argument - Prints the argument based on the conversion specifier.
 * @args: Variable argument list.
 * @specifier: Conversion specifier character.
 *
 * Return: Number of characters printed for the argument.
 */

int _print_argument(va_list args, char specifier)
{
	int count = 0;

	if (specifier == 'c')
	{
		int c = va_arg(args, int);
		count += _putchar(c);
	}
	else if (specifier == 's')
	{
		char *s = va_arg(args, char *);
		count += _print_string(s);
	}
	else if (specifier == '%')
	{
		count += _putchar('%');
	}

	return (count);
}


/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the character written is returned.
 *         On error, -1 is returned.
 */

/** int _putchar(char c)
 * {
 *	return write(1, &c, 1);
 * }
 */


/**
 * _print_string - Prints a string to the standard output (stdout).
 * @s: The string to be printed.
 *
 * Return: Number of characters printed.
 */

int _print_string(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (write(1, s, len));
}
