#ifndef MAIN_H
#define MAIN_H

/* standard libraries */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

#define BUFFER_SIZE 1024

/* _putchar - writes a character to the standard output */
int _putchar(char c);

/* _strlen - calculates the length of a string */
int _strlen(const char *str);

/* print_char - prints a single character */
void print_char(char *buffer, int *index, char c, int *count);

/* print_string - prints a string */
void print_string(char *buffer, int *index, char *str, int *count, int precision);

/* print_number - prints a number */
void print_number(char *buffer, int *index, long int num, int base, int is_unsigned, int is_upper, int *count, int precision);

/* print_rot13 - prints a rot13'ed string */
void print_rot13(char *buffer, int *index, char *str, int *count);

/* _printf - Prints output according to a format */
int _printf(const char *format, ...);

/*_printf.c helpers */
int _print_argument(va_list args, char specifier);
int _print_string(char *s);

#endif /* MAIN_H */

