# Libft

This project involves developing a library of functions in C, focusing on string manipulation, memory management, linked lists, and more.

## Included functions

### String and Character Functions:

- **ft_atoi**: Converts a string to an integer.
- **ft_isalnum**: Checks if a character is alphanumeric (letter or digit).
- **ft_isalpha**: Checks if a character is an alphabetic letter.
- **ft_isascii**: Checks if a character is an ASCII character (0-127).
- **ft_isdigit**: Checks if a character is a digit (0-9).
- **ft_isprint**: Checks if a character is printable (includes space).
- **ft_itoa**: Converts an integer to a string.
- **ft_strchr**: Locates the first occurrence of a character in a string.
- **ft_strdup**: Duplicates a string by allocating memory for it.
- **ft_striteri**: Applies a function to each character of a string, passing its index.
- **ft_strjoin**: Concatenates two strings into a *new* string.
- **ft_strlcat**: Concatenates strings, ensuring a null-terminated result with size limit.
- **ft_strlcpy**: Copies a string to a destination, ensuring null-termination with size limit.
- **ft_strlen**: Returns the length of a string.
- **ft_strmapi**: Creates a new string by applying a function to each character of another string.
- **ft_strncmp**: Compares two strings up to a specified number of characters.
- **ft_strnstr**: Locates a substring in a string, limited by a maximum length.
- **ft_strrchr**: Locates the last occurrence of a character in a string.
- **ft_strtrim**: Removes specified characters from the beginning and end of a string.
- **ft_substr**: Extracts a substring from a string.
- **ft_tolower**: Converts an uppercase character to lowercase.
- **ft_toupper**: Converts a lowercase character to uppercase.

### Memory Management Functions:

- **ft_bzero**: Sets a block of memory to zero.
- **ft_calloc**: Allocates memory for an array and initializes it to zero.
- **ft_memchr**: Locates the first occurrence of a byte in a block of memory.
- **ft_memcmp**: Compares two blocks of memory.
- **ft_memcpy**: Copies a block of memory from one location to another.
- **ft_memmove**: Copies a block of memory from one location to another, handling overlapping regions.
- **ft_memset**: Fills a block of memory with a specific byte.

### Output Functions:

- **ft_putchar_fd**: Writes a character to a file descriptor.
- **ft_putendl_fd**: Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd**: Writes an integer as a string to a file descriptor.
- **ft_putstr_fd**: Writes a string to a file descriptor.


### Linked List Functions:

- **ft_lstadd_back**: Adds a new element to the end of a linked list.
- **ft_lstadd_front**: Adds a new element to the beginning of a linked list.
- **ft_lstclear**: Deletes and frees all elements of a linked list, starting from the head.
- **ft_lstdelone**: Deletes and frees a single element from a linked list.
- **ft_lstiter**: Iterates over each element of a linked list, applying a given function to each element.
- **ft_lstlast**: Returns the last element of a linked list.
- **ft_lstmap**: Creates a new linked list by applying a function to each element of an existing list.
- **ft_lstnew**: Creates a new linked list element with a specified content.
- **ft_lstsize**: Returns the number of elements in a linked list.

### Other Utility Functions:

- **ft_split**: Splits a string into an array of substrings based on a delimiter.

## Resources
- [Subject](./static/libft.pdf)
- [man7](https://man7.org/linux/man-pages/index.html)
- [Extreme C (book)](https://www.dropbox.com/scl/fi/jspczpgumsd2ct7sluvox/Extreme_C_Taking_You_To_The_Limit_In_Concurrency_OOP_And_The_Most_Advanced_Capabilities_Of_C_Kamran_Amini_z-lib.org.pdf?rlkey=ffpu0qmift02gzo79vx36xe8j&e=1&dl=0)
