*This project has been created as part of 42 curriculum by toavandr*

# Description

**ft_printf** is a custom reimplementation of the standard C `printf` function.
The goal of this project is to reproduce the behavior of the original `printf`, handling formatted output and variadic arguments using only the allowed functions.

This project is part of the 42 curriculum and focuses on low-level programming, format parsing, variadic functions, and output management in C.
It allows printing of integers, unsigned integers, characters, strings, pointers, hexadecimal numbers, and the percent sign.

---

# Instructions

## 1️⃣ Clone the repository

```bash
git clone https://github.com/Toavandr/Printf.git
cd Printf
```

## 2️⃣ Compile the library

```bash
make
```

This will generate:

```
libftprintf.a
```

## 3️⃣ Makefile commands

```bash
make        # Compile the library
make clean  # Remove object files (.o)
make fclean # Remove object files and library
make re     # Clean and recompile everything
```

---

# Supported Format Specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal format (with `0x` prefix) |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints a signed integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a number in hexadecimal (lowercase) |
| `%X` | Prints a number in hexadecimal (uppercase) |
| `%%` | Prints a percent sign |

---

# Algorithm & Technical Choices

## Parsing

- The format string is parsed character by character.
- When `%` is detected, the next character is checked to determine the specifier.
- If the specifier is valid, the corresponding argument is retrieved using `va_arg`.

## Functions & Implementation

- `%d` and `%i` use recursive printing of integers.
- `%u` prints unsigned integers.
- `%x` and `%X` use recursive base conversion to hexadecimal.
- `%p` prints pointers with the `0x` prefix.
- Strings handle NULL by printing `(null)`.
- Characters are printed using a dedicated function.
- All output is done via `write()`.

## Data Structures

- No advanced structures were required; simple integers, pointers, and arrays are used.
- Recursion is leveraged for number conversion to handle multiple digits cleanly.

## Algorithm Justification

- Recursion simplifies printing numbers of arbitrary length.
- Base conversion uses the modulus and division method, which is efficient and standard.
- Handling variadic arguments ensures flexibility with multiple types.
- The modular approach (one function per type) ensures code clarity and maintainability.

---

# Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello World");
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Unsigned: %u\n", 42);
    ft_printf("Hex lowercase: %x\n", 255);
    ft_printf("Hex uppercase: %X\n", 255);
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Percent: %%\n");
    return (0);
}
```

---

# Project Structure

```
.
├── ft_printf.c
├── ft_format.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putnbrbase.c
├── ft_printf.h
└── Makefile
```

---

# Resources

- [C Standard Library: stdarg.h](https://en.cppreference.com/w/c/variadic)
- [C Reference: printf](https://en.cppreference.com/w/c/io/fprintf)
- [Understanding base conversions in C](https://www.programiz.com/c-programming/examples/decimal-hexadecimal)
- [Stack Overflow](https://stackoverflow.com) for problem solving and examples
- [Koor.fr](https://koor.fr) for additional programming references
- **AI assistance:** Structuring the README, writing explanations of algorithms, clarifying technical implementation and instructions