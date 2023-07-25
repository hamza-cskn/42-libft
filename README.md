
# 42-libft

> Your very first own library

## Moulinette
Passed with 125/100 at 11 July 2023

## Summary
This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon. Some of them are replicas of original C functions.

## Mandatory Part
| Program Name    | Turn in files | Makefile | External functs. | Libft authorized | Description |
| -------- | ------- | ------- | -------- | ------- | ------- |
| libft.a | Makefile, libft.h, ft_*.c | NAME, all, clean, fclean, re | Detailed below | N/A | Write your own library. |

### Libc Functions
Here are 42 implementations of libc. The implementations have the 'ft_' prefix.

* [`isalpha`](https://github.com/hamza-cskn/42-libft/blob/master/ft_isalpha.c) - Check if a character is alphabetic.
* [`isdigit`](https://github.com/hamza-cskn/42-libft/blob/master/ft_isdigit.c) - Check if a character is a decimal digit.
* [`isalnum`](https://github.com/hamza-cskn/42-libft/blob/master/ft_isalnum.c) - Check if a character is alphabetic or a digit.
* [`isascii`](https://github.com/hamza-cskn/42-libft/blob/master/ft_isascii.c) - Check if a character is a 7-bit ASCII character.
* [`isprint`](https://github.com/hamza-cskn/42-libft/blob/master/ft_isprint.c) - Check if a character is printable.
* [`strlen`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strlen.c) - Calculate the length of a string.
* [`memset`](https://github.com/hamza-cskn/42-libft/blob/master/ft_memset.c) - Fill memory with a constant byte.
* [`bzero`](https://github.com/hamza-cskn/42-libft/blob/master/ft_bzero.c) - Set the first n bytes of memory to zero.
* [`memcpy`](https://github.com/hamza-cskn/42-libft/blob/master/ft_memcpy.c) - Copy memory from source to destination.
* [`memmove`](https://github.com/hamza-cskn/42-libft/blob/master/ft_memmove.c) - Copy memory, handling overlapping areas.
* [`strlcpy`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strlcpy.c) - Safely copy a string into a fixed-size buffer.
* [`strlcat`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strlcat.c) - Safely concatenate strings into a fixed-size buffer.
* [`toupper`](https://github.com/hamza-cskn/42-libft/blob/master/ft_toupper.c) - Convert a character to uppercase.
* [`tolower`](https://github.com/hamza-cskn/42-libft/blob/master/ft_tolower.c) - Convert a character to lowercase.
* [`strchr`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strchr.c) - Find the first occurrence of a character in a string.
* [`strrchr`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strrchr.c) - Find the last occurrence of a character in a string.
* [`strncmp`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strncmp.c) - Compare two strings up to a specified length.
* [`memchr`](https://github.com/hamza-cskn/42-libft/blob/master/ft_memchr.c) - Locate the first occurrence of a character in a memory block.
* [`memcmp`](https://github.com/hamza-cskn/42-libft/blob/master/ft_memcmp.c) - Compare two memory blocks up to a specified length.
* [`strnstr`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strnstr.c) - Locate a substring in a string, limiting the search to a specified length.
* [`atoi`](https://github.com/hamza-cskn/42-libft/blob/master/ft_atoi.c) - Convert a string to an integer.
* [`calloc`](https://github.com/hamza-cskn/42-libft/blob/master/ft_calloc.c) - Allocate and zero-initialize memory.
* [`strdup`](https://github.com/hamza-cskn/42-libft/blob/master/ft_strdup.c) - Duplicate a string.

### Additional Functions
These functions are not in the libc library.

#### [ft_substr](https://github.com/hamza-cskn/42-libft/blob/master/ft_substr.c)
**Prototype:** char *ft_substr (char const *s, unsigned int start, size_t len);
<br>**Parameters:** 
- **s**: The string from which to create the substring.
- **start**: The start index of the substring in the string 's'.
- **len**: The maximum length of the substring.

<br>**Return value:** 
- The substring.
- NULL if the allocation fails.

<br>**Description:** 
Allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.

***

#### [ft_strjoin](https://github.com/hamza-cskn/42-libft/blob/master/ft_strjoin.c)
**Prototype:** char *ft_strjoin(char const *s1, char const *s2) ;
<br>**Parameters:** 
- **s1**: The prefix string.
- **s2**: The suffix string.

<br>**Return value:** 
- The new string.
- NULL if the allocation fails.

<br>**Description:** 
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of 's1' and 's2'.

***

#### [ft_strtrim](https://github.com/hamza-cskn/42-libft/blob/master/ft_strtrim.c)
**Prototype:** char *ft_strtrim(char const *s1, char const *set);
<br>**Parameters:** 
- **s1**: The string to be trimmed.
- **set**: The reference set of characters to trim.

<br>**Return value:** 
- The trimmed string.
- NULL if the allocation fails.

<br>**Description:** 
Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.

#### [ft_split](https://github.com/hamza-cskn/42-libft/blob/master/ft_split.c)
**Prototype:** char **ft_split(char const *s, char c);
<br>**Parameters:** 
- **s**: The string to be split.
- **c**: The delimiter character.

<br>**Return value:** 
- The array of new strings resulting from the split.
- NULL if the allocation fails.

<br>**Description:** 
Allocates (with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer.

***

#### [ft_itoa](https://github.com/hamza-cskn/42-libft/blob/master/ft_itoa.c)
**Prototype:** char *ft_itoa(int n);
<br>**Parameters:** 
- **n**: the integer to convert.

<br>**Return value:** 
- The string representing the integer.
- NULL if the allocation fails.

<br>**Description:** 
Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

***

#### [ft_strmapi](https://github.com/hamza-cskn/42-libft/blob/master/ft_strmapi.c)
**Prototype:** char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
<br>**Parameters:** 
- **s**: The string on which to iterate.
- **f**: The function to apply to each character.

<br>**Return value:** 
- The string created from the successive applications of 'f'.
- Returns NULL if the allocation fails.

<br>**Description:** 
Applies the function 'f' to each character of the string 's', passing its index as the first argument to create a new string (with malloc(3)) resulting from successive applications of 'f'.

***

#### [ft_striteri](https://github.com/hamza-cskn/42-libft/blob/master/ft_striteri.c)
**Prototype:** void ft_striteri(char *s, void (*f)(unsigned int, char*));
<br>**Parameters:** 
- **s**: The string on which to iterate.
- **f**: The function to apply to each character.

<br>**Return value:** None
<br>**Description:** 
Applies the function 'f' on each character of the string passed as an argument, passing its index as the first argument. Each character is passed by address to 'f' to be modified if necessary.

***

#### [ft_putchar_fd](https://github.com/hamza-cskn/42-libft/blob/master/ft_putchar_fd.c)
**Prototype:** void ft_putchar_fd(char c, int fd);
<br>**Parameters:** 
- **c**: The character to output.
- **fd**: The file descriptor on which to write.

<br>**Return value:** None
<br>**Description:** 
Outputs the character 'c' to the given file descriptor.

***

#### [ft_putstr_fd](https://github.com/hamza-cskn/42-libft/blob/master/ft_putstr_fd.c)
**Prototype:** void ft_putstr_fd(char *s, int fd);
<br>**Parameters:** 
- **s**: The string to output.
- **fd**: The file descriptor on which to write.

<br>**Return value:** None
<br>**Description:** 
Outputs the string 's' to the given file descriptor.

***

#### [ft_putendl_fd](https://github.com/hamza-cskn/42-libft/blob/master/ft_putendl_fd.c)
**Prototype:** void ft_putendl_fd(char *s, int fd);
<br>**Parameters:** 
- **s**: The string to output.
- **fd**: The file descriptor on which to write.

<br>**Return value:** None
<br>**Description:** 
Outputs the string 's' to the given file descriptor followed by a newline.

***

#### [ft_putnbr_fd](https://github.com/hamza-cskn/42-libft/blob/master/ft_putnbr_fd.c)
**Prototype:** void ft_putnbr_fd(int n, int fd);
<br>**Parameters:** 
- **n**: The integer to output.
- **fd**: The file descriptor on which to write.

<br>**Return value:** None
<br>**Description:** 
Outputs the integer 'n' to the given file descriptor.
