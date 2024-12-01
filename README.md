Libft

Libft is a custom implementation of the standard C library functions. This project is part of the 42 curriculum, aiming to deepen understanding of low-level programming concepts and improve problem-solving and debugging skills. It challenges developers to create their own library that adheres to strict coding standards and can be reused across future projects.
Table of Contents

    Project Overview
    Features
    Function List
    Installation
    Usage
    Testing
    Credits

Project Overview

The Libft project requires the implementation of essential C standard library functions along with additional utility functions. These functions are designed to handle strings, memory management, file descriptors, and more, all while adhering to the coding norms of the 42 School.

This project lays a foundation for understanding how standard libraries work and prepares developers for more advanced projects by ensuring mastery over fundamental concepts like pointers, memory allocation, and string manipulation.
Features

    Reimplementation of essential C library functions (libft).
    Additional helper functions to handle strings, memory, and linked lists.
    Bonus features including linked list manipulation.
    A Makefile for efficient compilation.
    Strict adherence to the Norminette style guide.

Function List
Mandatory Part

Libft includes reimplementations of the following C library functions:

    Character checks:
        ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint.

    String manipulation:
        ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strdup.

    Memory functions:
        ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp.

    Conversion utilities:
        ft_atoi, ft_toupper, ft_tolower.

    Additional memory handling:
        ft_calloc.

    String search:
        ft_strnstr.

Additional Part

Helper functions for advanced string and memory manipulation:

    ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri.

Bonus Part

Linked list utilities:

    ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.

Installation

Clone the repository to your local machine:

git clone https://github.com/your-username/libft.git
cd libft

Compile the library:

make

This will generate a libft.a file, which can be linked to your projects.

To clean object files, use:

make clean

To clean all compiled files, use:

make fclean

To recompile everything, use:

make re

Usage

To use Libft in your project, include libft.h in your source files and link libft.a during compilation.

Example:

#include "libft.h"

int main()
{
    char str[] = "Hello, Libft!";
    ft_putstr_fd(str, 1); // Prints the string to stdout
    return 0;
}

Compile your program with Libft:

gcc -Wall -Wextra -Werror -o program_name your_file.c -L. -lft

Testing

Libft can be tested using several community-developed tools or manual testing. Below are steps for manual and automated testing:
Manual Testing

    Write a simple test program to call each function in libft.
    Compile and run your program.

Automated Testing

You can use third-party testers to validate your Libft implementation. Clone one of the popular testers:

    libft-tester
    libft-unit-test

Run the tests and address any errors flagged by the tester.
Credits

This project was completed as part of the 42 School Curriculum. Special thanks to the 42 community for their guidance and support. If you find any issues or have suggestions, feel free to contribute or report them.
