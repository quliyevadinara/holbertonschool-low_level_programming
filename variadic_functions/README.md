# Variadic Functions

This project is part of the **Holberton School Low-Level Programming** curriculum.  It focuses on understanding and implementing variadic functions in C. 

## Description

Variadic functions are functions that can accept a variable number of arguments.  This project explores the use of `stdarg.h` library and its macros (`va_start`, `va_arg`, `va_end`) to handle variable arguments in C.

## Learning Objectives

At the end of this project, you should be able to explain: 

* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files should end with a new line
* Code should use the Betty style
* No global variables allowed
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free`, and `exit`
* You are allowed to use `_putchar`
* The prototypes of all functions and the prototype of the function `_putchar` should be included in a header file called `variadic_functions.h`
* All header files should be include guarded

## Files

| File | Description |
|------|-------------|
| `variadic_functions.h` | Header file containing all function prototypes |
| `0-sum_them_all.c` | Function that returns the sum of all its parameters |
| `1-print_numbers.c` | Function that prints numbers, followed by a new line |
| `2-print_strings.c` | Function that prints strings, followed by a new line |
| `3-print_all.c` | Function that prints anything (char, int, float, string) |

## Tasks

### 0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0`, return `0`

**Example:**
```c
sum_them_all(2, 98, 1024); // Returns 1122
sum_them_all(4, 98, 1024, 402, -1024); // Returns 500
```

### 1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line. 

* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* `separator` is the string to be printed between numbers
* `n` is the number of integers passed to the function
* If `separator` is `NULL`, don't print it

**Example:**
```c
print_numbers(", ", 4, 0, 98, -1024, 402);
// Output: 0, 98, -1024, 402
```

### 2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line. 

* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
* `separator` is the string to be printed between strings
* `n` is the number of strings passed to the function
* If `separator` is `NULL`, don't print it
* If a string is `NULL`, print `(nil)` instead

**Example:**
```c
print_strings(", ", 2, "Jay", "Django");
// Output: Jay, Django
```

### 3. To be is a to be the value of a variable

Write a function that prints anything.

* Prototype: `void print_all(const char * const format, ...);`
* `format` is a list of types of arguments: 
  * `c`: char
  * `i`: integer
  * `f`: float
  * `s`: char * (if string is NULL, print `(nil)`)
* Any other char should be ignored
* Print a new line at the end

**Restrictions:**
* No `for`, `goto`, ternary operator, `else`, or `do...while`
* Maximum 2 `while` loops
* Maximum 2 `if` statements
* Maximum 9 variables

**Example:**
```c
print_all("ceis", 'B', 3, "stSchool");
// Output: B, 3, stSchool
```

## Compilation

All files can be compiled using: 

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main_file.c] [function_file.c] -o [output_name]
```

## Author

**quliyevadinara** - [GitHub Profile](https://github.com/quliyevadinara)

## Repository

* **GitHub repository:** `holbertonschool-low_level_programming`
* **Directory:** `variadic_functions`
