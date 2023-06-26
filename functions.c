#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_int(int value) {
    printf("%d", value);
}

int printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;  // Move past the '%'
            switch (*format) {
                case 'd':
                case 'i':
                    {
                        int value = va_arg(args, int);
                        print_int(value);
                        break;
                    }
                // Handle other conversion specifiers as needed

                default:
                    putchar(*format);  // Print the char as is
                    break;
            }
        } else {
            putchar(*format);  // Print non-format chars
        }
        format++;
    }

    va_end(args);
}

int main(void) {
    int num = 42;
    printf("The answer is %d\n", num);
    printf("The answer is %i\n", num);
    return 0;
}
