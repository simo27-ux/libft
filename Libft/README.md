*This project has been created as part of the 42 curriculum by YOUR_LOGIN.*

# Libft

## Description

Libft is a project from the 42 curriculum in which we create our own C library by reimplementing standard C library functions and developing additional utility functions.

The goal of this project is to understand how C functions work internally, improve memory management skills, and learn how to manipulate strings, characters, memory, and linked lists.

The library is named `libft.a` and can be reused in future C projects.

## Instructions

### Compilation

To compile the library, clone the repository and enter its directory:

```bash
make
```

This generates the static library `libft.a`.

Available Makefile rules:

- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Recompiles the library from scratch.

### Usage

Include the header file `libft.h` in your C source files:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

## Library Description

The library contains the following functions.

### 1. Character Classification

Functions used to test characters:

- `ft_isalpha`: Checks whether a character is alphabetic.
- `ft_isdigit`: Checks whether a character is a decimal digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII character set.
- `ft_isprint`: Checks whether a character is printable.

### 2. String Functions

Functions for string manipulation and processing:

- `ft_strlen`: Calculates the length of a string.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strnstr`: Searches for a substring within a string, up to a specified length.
- `ft_strdup`: Duplicates a string using dynamically allocated memory.
- `ft_strlcpy`: Copies a string into a destination buffer with size control.
- `ft_strlcat`: Appends a string to a destination buffer with size control.
- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings into a newly allocated string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings using a delimiter.
- `ft_strmapi`: Creates a new string by applying a function to each character.
- `ft_striteri`: Applies a function to each character of a string, using its index.

### 3. Memory Functions

Functions for memory manipulation and allocation:

- `ft_memset`: Fills a memory area with a specified byte.
- `ft_bzero`: Sets a memory area to zero.
- `ft_memcpy`: Copies bytes between memory areas that do not overlap.
- `ft_memmove`: Copies bytes between memory areas, including overlapping areas.
- `ft_memchr`: Searches for a byte in a memory area.
- `ft_memcmp`: Compares two memory areas.
- `ft_calloc`: Allocates memory for an array and initializes it to zero.

### 4. Conversion Functions

- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.

### 5. File Descriptor Output Functions

Functions that write characters, strings, and numbers to a file descriptor:

- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### 6. Linked List Functions

The linked-list functions operate on the `t_list` structure defined in `libft.h`. Each node contains a content pointer and a pointer to the next node.

- `ft_lstnew`: Creates a new linked-list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstsize`: Counts the nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstdelone`: Deletes one node using a specified content-deletion function.
- `ft_lstclear`: Deletes and frees an entire list.
- `ft_lstiter`: Applies a function to the content of each node.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

## Resources

The following resources were useful for understanding C programming, standard library functions, memory management, and linked lists:

- [C standard library reference — cppreference](https://en.cppreference.com/w/c/header)
- [Linux man-pages](https://man7.org/linux/man-pages/)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [C programming language reference — cppreference](https://en.cppreference.com/w/c)

### AI Usage

AI tools were used as learning and development support during the project.

They helped explain C concepts, clarify the expected behavior of standard library functions, identify programming errors, understand memory management and linked lists, and assist with debugging and reviewing implementations.

The implementations were developed and reviewed as part of the learning process. AI assistance was used to understand the code and correct mistakes rather than replace the learning objectives of the project.

## Author

- **Login:** mohael-h
- **School:** 1337 / 42 Network
- **Project:** Libft
