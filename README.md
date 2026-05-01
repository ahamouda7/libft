# libft

A comprehensive C library providing essential string manipulation, memory management, and linked list operations. This project is a complete implementation of standard C library functions along with additional utility functions.

## Overview

**libft** is a custom C library that contains implementations of commonly used C standard library functions (libc), plus several additional helper functions. It's designed to provide a solid foundation for C projects by offering optimized and well-tested implementations.

## Features

### Core Functions

- **Character Classification**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **Case Conversion**: `ft_toupper`, `ft_tolower`
- **String Manipulation**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- **String Copying**: `ft_strlcpy`, `ft_strlcat`
- **String Building**: `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`, `ft_itoa`
- **String Mapping**: `ft_strmapi`, `ft_striteri`
- **Memory Management**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_strdup`
- **String Conversion**: `ft_atoi`
- **File Descriptor Output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus - Linked List Operations

- `ft_lstnew` - Create a new list node
- `ft_lstadd_front` - Add element at front of list
- `ft_lstadd_back` - Add element at back of list
- `ft_lstsize` - Get list size
- `ft_lstlast` - Get last node of list
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete entire list
- `ft_lstiter` - Apply function to each node
- `ft_lstmap` - Apply function to each node and create new list

## Building

### Prerequisites

- GCC or Clang compiler
- GNU Make

### Compilation

Build the main library:

```bash
make
```

Build with bonus (linked list) functions:

```bash
make bonus
```

Clean object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

### Output

The compilation produces `libft.a`, a static library archive that can be linked to other projects.

## Usage

### Include the Header

```c
#include "libft.h"
```

### Link the Library

When compiling your project, link against libft:

```bash
gcc your_program.c -L. -lft -o your_program
```

### Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    printf("String length: %zu\n", ft_strlen(str));
    printf("Uppercase: ");
    ft_putstr_fd(str, 1);
    ft_putstr_fd("\n", 1);
    return (0);
}
```

## Project Structure

```
libft/
├── Makefile              # Build configuration
├── libft.h               # Main header file with function declarations
├── README.md             # This file
│
├── Character Functions
│   ├── ft_isalpha.c
│   ├── ft_isdigit.c
│   ├── ft_isalnum.c
│   ├── ft_isascii.c
│   ├── ft_isprint.c
│   ├── ft_toupper.c
│   └── ft_tolower.c
│
├── String Functions
│   ├── ft_strlen.c
│   ├── ft_strchr.c
│   ├── ft_strrchr.c
│   ├── ft_strncmp.c
│   ├── ft_strnstr.c
│   ├── ft_strlcpy.c
│   └── ft_strlcat.c
│
├── Memory Functions
│   ├── ft_memset.c
│   ├── ft_bzero.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_calloc.c
│   └── ft_strdup.c
│
├── Advanced String Functions
│   ├── ft_substr.c
│   ├── ft_strjoin.c
│   ├── ft_strtrim.c
│   ├── ft_split.c
│   ├── ft_itoa.c
│   ├── ft_strmapi.c
│   ├── ft_striteri.c
│   ├── ft_atoi.c
│   ├── ft_putchar_fd.c
│   ├── ft_putstr_fd.c
│   ├── ft_putendl_fd.c
│   └── ft_putnbr_fd.c
│
└── Bonus - Linked List Functions
    ├── ft_lstnew_bonus.c
    ├── ft_lstadd_front_bonus.c
    ├── ft_lstadd_back_bonus.c
    ├── ft_lstsize_bonus.c
    ├── ft_lstlast_bonus.c
    ├── ft_lstdelone_bonus.c
    ├── ft_lstclear_bonus.c
    ├── ft_lstiter_bonus.c
    └── ft_lstmap_bonus.c
```

## Compilation Flags

The library is compiled with strict flags:

- `-Wall` - Enable all standard warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors

## Standards

All functions conform to the C89 standard and are compatible with Unix-like systems (Linux, macOS, etc.).

## Notes

- All memory allocation is performed using `malloc` and should be properly freed by the user
- File descriptor functions (`ft_putchar_fd`, `ft_putstr_fd`, etc.) write to the specified file descriptor (e.g., 1 for stdout)
- The linked list implementation is included as bonus functions and must be compiled with `make bonus`

## Author

Developed as a comprehensive C library implementation project.
