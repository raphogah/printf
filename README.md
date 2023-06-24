# printf

A custom implementation of the `printf` function in C.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Repository Content](#repository-content)
- [Contributors](#contributors)
- [License](#license)

## Introduction

`printf` is a custom implementation of the `printf` function in C. It provides a flexible and customizable way to format and print output to the console. The implementation follows the format specifiers and conventions of the standard `printf` function.

## Features

- Supports a wide range of conversion specifiers, including `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%b`, `%S`, `%p`, and `%R`.
- Handles flag characters, such as `+`, `space`, and `#`, for non-custom conversion specifiers.
- Supports length modifiers `l` and `h` for conversion specifiers `%d`, `%i`, `%u`, `%o`, `%x`, and `%X`.
- Handles field width for non-custom conversion specifiers.
- Handles precision for non-custom conversion specifiers.
- Supports flag character `0` for non-custom conversion specifiers.
- Supports flag character `-` for non-custom conversion specifiers.
- Provides a custom conversion specifier `%S` to print strings with non-printable characters represented in hexadecimal.
- Provides a custom conversion specifier `%R` to print rot13'ed strings.

## Installation

To use `printf` in your project, follow these steps:

1. Clone the repository:
   git clone https://github.com/udeme-goc/printf.git

2. Include the `main.h` header file in your source files:
   #include "main.h"

3. Compile your code along with the `*.c` files from the `printf` repository:
   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 your_file.c path/to/printf/*.c -o output

4. Run the compiled executable:
   ./output

## Usage

To use the `printf` function in your code, follow the standard syntax of the `printf` function. Provide a format string as the first argument, followed by any required arguments corresponding to the format specifiers in the format string.

#include "main.h"

int main(void) {
    _printf("Hello, %s!\n", "World");
    return 0;
}

## Examples

Here are some examples of using the `printf` function:

#include "main.h"

int main(void) {
    int num = 42;
    char ch = 'A';
    char *str = "Hello";

    _printf("Number: %d\n", num);
    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);

    return 0;
}

Output:

Number: 42
Character: A
String: Hello

## Repository Content

The repository contains the following files:

- README.md: Documentation for the project
- `main.h`: Header file containing function prototypes and necessary includes.
- `1-fine-print.c`: Implementation of `printf` function for handling conversion specifiers `%d` and `%i`.
- `2-better-in-print.c`: Implementation of `printf` function for handling conversion specifier `%b`.
- `3-experience-print.c`: Implementation of `printf` function for handling conversion specifiers `%u`, `%o`, `%x`, and `%X`.
- `4-badnews.c`: Implementation of `printf` function with a local buffer to minimize calls to `write`.
- `5-leopard-print.c`: Implementation of `printf` function for handling custom conversion specifier `%S`.
- `6-believe-in-print.c`: Implementation of `printf` function for handling conversion specifier `%p`.
- `7-give-and-take.c`: Implementation of `printf` function for handling flag characters `+`, `space`, and `#`.
- `8-sarcasm-lost.c`: Implementation of `printf` function for handling length modifiers `l` and `h`.
- `9-print-money.c`: Implementation of `printf` function for handling field width.
- `10-performance.c`: Implementation of `printf` function for handling precision.
- `11-depressing.c`: Implementation of `printf` function for handling flag character `0`.
- `12-never-give-up.c`: Implementation of `printf` function for handling flag character `-`.
- `14-flood-of-print.c`: Implementation of `printf` function for handling custom conversion specifier `%R`.
- `15-together.c`: Combined implementation of all the features.
- `_printf.c`: Core implementation of the `printf` function.
- `_putchar.c`: Implementation of the `_putchar` function used by `_printf`.

## Contributors

- Raphael Ajah
- Udeme Harrison

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
