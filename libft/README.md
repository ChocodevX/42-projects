*This project has been created as part of the 42 curriculum by ponsumri.*

# Libft

## Description

Libft is a personal C library that reimplements a set of standard `libc`
functions and adds several custom utility and linked-list functions.

The library is split into three parts:

### Part 1 — Libc reimplementations

Functions matching the prototype and behavior of their original `libc`
counterparts, prefixed with `ft_`.

| Function | Does | Returns |
|---|---|---|
| `ft_isalpha` | checks if char is a letter | 1 or 0 |
| `ft_isdigit` | checks if char is a digit | 1 or 0 |
| `ft_isalnum` | checks if char is alphanumeric | 1 or 0 |
| `ft_isascii` | checks if char is in ASCII range | 1 or 0 |
| `ft_isprint` | checks if char is printable | 1 or 0 |
| `ft_strlen` | counts chars in a string | length (size_t) |
| `ft_memset` | fills memory with a byte value | pointer to memory |
| `ft_bzero` | fills memory with zeros | none |
| `ft_memcpy` | copies memory between non-overlapping areas | pointer to dest |
| `ft_memmove` | copies memory, handles overlap safely | pointer to dest |
| `ft_strlcpy` | copies string, size-bounded | length of source string |
| `ft_strlcat` | appends string, size-bounded | total length attempted |
| `ft_toupper` | converts char to uppercase | converted char |
| `ft_tolower` | converts char to lowercase | converted char |
| `ft_strchr` | finds first occurrence of char in string | pointer to char or NULL |
| `ft_strrchr` | finds last occurrence of char in string | pointer to char or NULL |
| `ft_strncmp` | compares two strings up to n chars | difference between chars |
| `ft_memchr` | finds byte in memory block | pointer to byte or NULL |
| `ft_memcmp` | compares two memory blocks | difference between bytes |
| `ft_strnstr` | finds substring within n chars | pointer to match or NULL |
| `ft_atoi` | converts string to int | converted integer |
| `ft_calloc` | allocates and zeroes memory | pointer or NULL on failure | (size_t)-1 = somany (=SIZE_MAX, 2^64 - 1) .
| `ft_strdup` | duplicates a string on the heap | new string or NULL |

### Part 2 — Additional functions

String/array utilities not available in `libc` (or available in a
different form).

| Function | Does | Returns |
|---|---|---|
| `ft_substr` | extracts a substring from a string | new string or NULL |s
| `ft_strjoin` | concatenates two strings into a new one | new string or NULL |
| `ft_strtrim` | removes leading/trailing chars from a set | new string or NULL |
| `ft_split` | splits a string by a delimiter char | NULL-terminated array of strings |
| `ft_itoa` | converts int to a new string | new string or NULL | long nb because we wanna fix nb = -nb when int is near to max or min.
| `ft_strmapi` | applies a function to each char (indexed), builds new string | new string or NULL |
| `ft_striteri` | applies a function to each char (indexed) in place | none |
| `ft_putchar_fd` | writes a char to a file descriptor | none |
| `ft_putstr_fd` | writes a string to a file descriptor | none |
| `ft_putendl_fd` | writes a string + newline to a file descriptor | none |
| `ft_putnbr_fd` | writes an int to a file descriptor | none |

### Part 3 — Linked list

A minimal singly linked list implementation (`t_list`). This version
of the subject has **no bonus part** for the linked list.

| Function | Does | Returns |
|---|---|---|
| `ft_lstnew` | creates a new node with given content | pointer to new node |
| `ft_lstadd_front` | inserts a node at the start of the list | none |
| `ft_lstsize` | counts nodes in the list | node count (unsigned int) |
| `ft_lstlast` | finds the last node in the list | pointer to last node |
| `ft_lstadd_back` | inserts a node at the end of the list | none |
| `ft_lstdelone` | frees one node's content and the node | none |
| `ft_lstclear` | frees an entire list, sets list pointer to NULL | none |
| `ft_lstiter` | applies a function to each node's content | none |
| `ft_lstmap` | applies a function to each node, builds a new list | new list or NULL |

## Instructions

### Compilation

```bash
make        # builds libft.a at the root of the repository
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

The library is compiled with `-Wall -Wextra -Werror` using `cc`, and
archived with `ar` (no `libtool`).

### Usage

Include the header and link against the compiled archive:

```c
#include "libft.h"
```

```bash
cc your_file.c -L. -lft -o your_program
```

## Resources

- `man` pages for the original libc functions (`man 3 strlen`,
  `man 3 memcpy`, `man 3 calloc`, `https://linux.die.net/man`,
  `https://www.geeksforgeeks.org/`, etc.) — used as the reference
  behavior for Part 1.
- 42 Libft subject (v19.3), used as the single source of truth for
  function prototypes, return values, and edge-case behavior
  (in particular: `unsigned int ft_lstsize`, and no bonus part for
  the linked list in this subject version).

**AI usage**: Claude Code was used during this project to:
- Audit the codebase against the subject (v19.3) for build errors,
  header/implementation prototype mismatches, missing files in the
  Makefile's `SRC`, norm violations, and logic issues (e.g. `ft_itoa`
  handling `INT_MIN` and `0`, missing NULL guards) and help for
  writing README.md.
- No production code was generated by AI; all fixes were written by
  the author based on the issues identified during the audit.