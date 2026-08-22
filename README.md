*This project has been created as part of the 42 curriculum by amantoux.*

# ft_printf

## Description

`ft_printf` is a project from the 42 curriculum that consists of recreating the behavior of the standard C library function `printf()`.

The goal of the project is to develop a custom implementation of `printf()` while learning how to handle **variadic functions**, format strings, and different types of arguments.

The implementation must support the following conversions:

- `%c` — character
- `%s` — string
- `%p` — pointer address in hexadecimal
- `%d` — decimal integer
- `%i` — integer
- `%u` — unsigned decimal integer
- `%x` — hexadecimal integer in lowercase
- `%X` — hexadecimal integer in uppercase
- `%%` — percent sign

The project is implemented in C and must respect the coding standards and restrictions defined by the 42 curriculum.

## Instructions

### Compilation

```bash
make        # compile the project
```

Useful Makefile targets:

```bash
make clean  # remove object files and dependency files
make fclean # also remove the executable
make re     # rebuild everything
```

this create the static library `libftprintf.a`

## Usage

To use ft_printf() in another C project, include its header:

```c
#include "ft_printf.h"
```

and compile your project together with the library.

<h2 align="center">Educational use only</h2>
<p align="center">Please do not copy this code for assessed work in 42 or other courses.</p>
<p align="center">Use this repository for study and reference only.</p>