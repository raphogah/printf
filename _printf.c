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

			if (*format == 'c')  /* Handle %c specifier */
			{
				int c = va_arg(args, int);

				count += write(1, &c, 1);
			}
			else if (*format == 's')  /* Handle %s specifier */
			{
				char *s = va_arg(args, char *);
				int len = 0;

				while (s[len])
					len++;

				count += write(1, s, len);
			}
			else if (*format == '%')  /* Handle %% specifier */
			{
				count += write(1, "%", 1);
			}
		}
		else
		{
			count += write(1, format, 1);  /* Print regular character */
		}

		format++;
	}

	va_end(args);

	return (count);
}

