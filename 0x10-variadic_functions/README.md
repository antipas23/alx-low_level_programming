# C - Function pointers

This repo contains code written to understand variadic functions.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [variadic_functions.h](./variadic_functions.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                                                 |
| ------------------------ | --------------------------------                                          |
| `0-sum_them_all.c`       | `int sum_them_all(const unsigned int n, ...);`                            |
| `1-print_numbers.c`      | `void print_numbers(const char *separator, const unsigned int n, ...);`   |
| `2-print_strings.c`      | `void print_strings(const char *separator, const unsigned int n, ...);`   |
| `3-print_all.c`          | `void print_all(const char * const format, ...);`

## Tasks :page_with_curl:

* **0. Beauty is variable, ugliness is constant**
  * C function that returns the sum of all parameters. If `n=0`, return `0`

* **1. To be is to be the value of a variable**
  * Write a function that prints numbers, followed by a new line.
    * where `separator` is the string to be printed between numbers
    * and `n` is the number of integers passed to the function
    * You are allowed to use `printf`
    * If separator is `NULL`, don’t print it
    * Print a new line at the end of your function
  
* **2. One woman's constant is another woman's variable**
  * Write a function that prints strings, followed by a new line.
    * where `separator` is the string to be printed between the strings
    * and `n` is the number of strings passed to the function
    * You are allowed to use `printf`
    * If separator is `NULL`, don’t print it
    * If one of the string is `NULL`, print (`nil`) instead
    * Print a new line at the end of your function
   
* **3. To be is a to be the value of a variable**
  * Write a function that prints anything


