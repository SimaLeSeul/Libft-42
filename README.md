*This project has been created as part of the 42 curriculum by mibaboul.*

# libft

## Description

Libft is a C library that reimplements a set of useful standard library functions, along with string manipulation and linked list utilities. It provides reusable tools for C projects at 42.

The library is built as a static archive named `libft.a`. Function prototypes and the `t_list` type are declared in `libft.h`.

## Instructions

From the repository root, run:

```sh
make
```

To clean up build artifacts, `make clean` removes object files, while `make fclean` also removes `libft.a`. `make re` rebuilds the archive.

## Library details

### Character checks and conversion

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: check a character's type or value range.
- `ft_toupper`, `ft_tolower`: convert a letter to uppercase or lowercase.
- `ft_atoi`: converts the beginning of a string to an integer.
- `ft_itoa`: allocates and returns the decimal representation of an integer.

### Strings

- `ft_strlen`: returns the length of a string.
- `ft_strdup`: duplicates a string into allocated memory.
- `ft_strchr`, `ft_strrchr`: search for a character from the beginning or end of a string.
- `ft_strncmp`: compares up to `n` characters.
- `ft_strnstr`: searches for a substring within a specified length.
- `ft_strlcpy`, `ft_strlcat`: copy or concatenate strings while limiting the amount written.
- `ft_substr`: extracts a substring into allocated memory.
- `ft_strjoin`: concatenates two strings into a newly allocated string.
- `ft_strtrim`: removes the specified characters from the beginning and end of a string.
- `ft_split`: splits a string using a delimiter and returns an allocated array of strings.
- `ft_strmapi`: creates a new string by applying a function to each character.
- `ft_striteri`: applies a function to each character in place.

### Memory

- `ft_memset`: fills a memory region with a specified byte.
- `ft_bzero`: sets a memory region to zero.
- `ft_memcpy`: copies a memory region; the source and destination regions must not overlap.
- `ft_memmove`: copies a memory region, including when the regions overlap.
- `ft_memchr`: searches for a byte in a memory region.
- `ft_memcmp`: compares two memory regions.
- `ft_calloc`: allocates an array initialized to zero.

### Output to a file descriptor

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: write a character, a string, a string followed by a newline, or an integer to the supplied file descriptor.

### Linked lists

Lists use the `t_list` type, which contains a `content` pointer and a `next` pointer. The content is generic (`void *`); deletion and mapping functions receive the callbacks they need.

- `ft_lstnew`: creates a node containing the supplied pointer.
- `ft_lstadd_front`, `ft_lstadd_back`: add a node at the beginning or end of a list.
- `ft_lstsize`, `ft_lstlast`: return the number of nodes or the last node.
- `ft_lstdelone`: deletes a node and frees its content using the supplied `del` function.
- `ft_lstclear`: deletes an entire list and sets its pointer to `NULL`.
- `ft_lstiter`: applies a function to each content.
- `ft_lstmap`: creates a new list by transforming each content; `del` is used to clean up content if an error occurs.

## Resources

- C manual pages: `man 3` for standard library functions and `man 2` for system calls such as `write`.
- C standard library reference: https://en.cppreference.com/w/c
- `ar` documentation: `man ar`, for creating static archives.
- Artificial intelligence: used to draft and organize this README. It was used for the documentation task only, specifically to summarize the project, explain the build instructions, and the source file names. AI was not used to write or modify the library source code.
