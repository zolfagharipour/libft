# libft

`libft` is a comprehensive C library that combines three distinct projects to extend the functionality of the C standard library, implement a custom `printf` function, and enable line-by-line reading from a file descriptor until EOF.

## Warning for 42 Students

This repository is intended as a reference and educational tool. **42 students are strongly advised not to copy this code without fully understanding its functionality.** Plagiarism in any form is against 42's principles and could lead to serious academic consequences. Use this repository responsibly to learn and better understand how to implement similar functionalities on your own.

## Components

### 1. Libft

The core component, `libft`, consists of a collection of re-coded standard C library functions alongside additional utility functions that are not available in libc. Functions are prefixed with `ft_` to differentiate them from their standard counterparts.

- **Part 1 - Libc functions:** Functions such as `ft_strlen` and `ft_memset` mimic the behavior of `strlen` and `memset` respectively, adhering strictly to their original implementations as defined in their man pages.
  
- **Part 2 - Additional functions:** This includes a set of useful functions that are either not present in the libc or have variations that differ from the original libc implementations.
  
- **Part 3 - Linked list management:** Functions to create, manipulate, and delete linked lists in C.

### 2. ft_printf

A recreation of the `printf` function, named `ft_printf`, which mimics the functionality of the original `printf`. It supports various conversions and flags detailed below:

- **Conversions:** `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- **Flags:** `'-0.'` and field minimum width, `'# +'` (including a space as a flag).

### 3. Get Next Line

The `get_next_line` function allows reading from a file descriptor line by line until EOF. It is capable of handling multiple file descriptors simultaneously without losing the reading state of each.

- **Buffer Size:** Can be adjusted using `-D BUFFER_SIZE=<size>` during compilation to suit different memory constraints or performance requirements.

## Installation

To use `libft` in your projects, follow these steps to clone the repository and compile the source code:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
make
