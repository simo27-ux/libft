# Libft

## Description

Libft is a project from the 42/1337 curriculum. The goal is to recreate a set of standard C library functions and implement additional utility functions.

This project helps develop a deeper understanding of C, memory management, pointers, strings, and linked lists.

## Contents

- **Libc functions:** Character checks, string manipulation, memory manipulation, and conversions.
- **Additional functions:** String creation, trimming, splitting, and file descriptor output.
- **Linked lists:** Creation, insertion, traversal, and deletion of linked-list elements.

## Compilation

To compile the library, run:

```bash
make
```

This creates the static library `libft.a`.

Available Makefile rules:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Rebuild the library
```

## Usage

Include `libft.h` in your C source file and link the library when compiling:

```c
#include "libft.h"
```

Example compilation command:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

## Author

mohael-h

