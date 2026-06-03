*This project has been created as part of the 42 curriculum by <mgiustin>.*

## Description
Libft is the very first project of the 42 core curriculum. Its purpose is to recode a selection of standard C library functions (libc), alongside additional utility functions for string manipulation, memory management, and linked list processing. The final output is a static library (`libft.a`) that serves as a foundational toolkit for all subsequent C projects in the school curriculum.

## Instructions

### Compilation
The project includes a `Makefile` compliant with the school rules. To compile the mandatory library, run the main rule at the root of the repository:

```bash
make
```

To compile the library including the linked list utility functions (bonus part):

```bash
make bonus
```

### Available Rules
* `make` or `make all`: Compiles the source files and generates the `libft.a` archive.
* `make clean`: Removes all object files (`.o`) generated during compilation.
* `make fclean`: Removes the object files and the final library file `libft.a`.
* `make re`: Performs a full reset by recompiling the entire project from scratch (`fclean` + `all`).

### Usage
To integrate this library into another C project, include the header file in your code:

```c
#include "libft.h"
```

When compiling your external project, link the static archive by specifying the correct path:

```bash
cc main.c -L. -lft -Wall -Wextra -Werror
```

## Resources & AI Usage

### References Used
* Unix system manuals (`man isalpha`, `man memcpy`, etc.) to match the exact standard behaviors.
* The C99 standard to properly understand pointer manipulation and dynamic memory allocation.

### AI Usage Statement
In compliance with the 42 AI instructions, Artificial Intelligence tools were carefully used to:
* Generate and optimize the skeleton of the `Makefile` to ensure proper dependency management and prevent relinking.
* Review and polish the formatting of this markdown documentation file.
All algorithmic logic and core source code for individual functions were written manually to achieve true foundational learning and peer evaluation readiness.

## Library Functions

### Character Classification and Conversion
* `ft_isalpha` — Checks for an alphabetic character.
* `ft_isdigit` — Checks for a digit (0 through 9).
* `ft_isalnum` — Checks for an alphanumeric character.
* `ft_isascii` — Checks whether a character fits into the ASCII character set.
* `ft_isprint` — Checks for any printable character.
* `ft_toupper` — Converts a letter to uppercase.
* `ft_tolower` — Converts a letter to lowercase.

### String and Memory Manipulation
* `ft_strlen` — Calculates the length of a string.
* `ft_memset` — Fills memory with a constant byte.
* `ft_bzero` — Zeroes a byte string.
* `ft_memcpy` — Copies a memory area.
* `ft_memmove` — Copies a memory area safely handling overlapping regions.
* `ft_strlcpy` — Size-bounded string copying.
* `ft_strlcat` — Size-bounded string concatenation.
* `ft_strchr` — Locates a character in a string.
* `ft_strrchr` — Locates the last occurrence of a character in a string.
* `ft_strncmp` — Compares two strings up to a byte limit.
* `ft_memchr` — Locates a byte in a memory area.
* `ft_memcmp` — Compares memory areas.
* `ft_strnstr` — Locates a substring in a string with length limits.
* `ft_atoi` — Converts a string to an integer.
* `ft_calloc` — Allocates memory and initializes its bytes to zero.
* `ft_strdup` — Duplicates a string by allocating new memory.
* `ft_substr` — Extracts a substring from a string starting at a specified index.
* `ft_strjoin` — Concatenates two strings into a new dynamically allocated string.
* `ft_strtrim` — Trims specified characters from the beginning and end of a string.
* `ft_split` — Splits a string into an array of strings using a delimiter character.
* `ft_itoa` — Converts an integer value into a null-terminated string.
* `ft_strmapi` — Applies a function to each character of a string to create a new one.
* `ft_striteri` — Applies a function to each character of a string, modifying it in-place.

### File Descriptor Outputs
* `ft_putchar_fd` — Outputs a character to a given file descriptor.
* `ft_putstr_fd` — Outputs a string to a given file descriptor.
* `ft_putendl_fd` — Outputs a string followed by a newline to a given file descriptor.
* `ft_putnbr_fd` — Outputs an integer to a given file descriptor.

### Linked List Utilities
* `ft_lstnew` — Allocates and creates a new node for a linked list.
* `ft_lstadd_front` — Adds a new node at the beginning of a linked list.
* `ft_lstsize` — Counts the number of elements in a linked list.
* `ft_lstlast` — Returns the last node of a linked list.
* `ft_lstadd_back` — Adds a new node at the end of a linked list.
* `ft_lstdelone` — Deletes a node and frees its content using a deletion function.
* `ft_lstclear` — Deletes and frees a node and all of its sequential successors.
* `ft_lstiter` — Iterates through a list and applies a function to the content of each node.
* `ft_lstmap` — Iterates through a list, applying a function to map its elements into a new list.

