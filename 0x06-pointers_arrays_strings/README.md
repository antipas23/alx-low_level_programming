# C - More pointers, arrays, strings

This repo contains C software written to implement different functions. There is no use of a standard library.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                             |
| ------------------------ | --------------------------------                      |
| `0-strcat.c`             | `char *_strcat(char *dest, char *src);`               |
| `1-strncat.c`            | `char *_strncat(char *dest, char *src, int n);`       |
| `2-strncpy.c`            | `char *_strncat(char *dest, char *src, int n);`       |
| `3-strcmp.c`             | `int _strcmp(char *s1, char *s2);`                    |
| `4-rev_array.c`          | `void reverse_array(int *a, int n);`                  |
| `5-string_toupper.c`     | `char *string_toupper(char *);`                       |
| `6-cap_string.c`         | `char *cap_string(char *);`                           |
| `7-leet.c`               | `char *leet(char *);`                                 |
| `100-rot13.c`            | `char *rot13(char *str);`                             |
| `101-print_number.c`     | `void print_number(int n);`                           |
| `100-atoi.c`             | `int _atoi(char *s);`                                 |
| `100-atoi.c`             | `int _atoi(char *s);`                                 |




## Code :page_with_curl:

* **0. strcat**
  * [0-strcat.c](./0-strcat.c): C program that concatenates two strings.
   * This function appends the `src` string to the `dest` string, overwriting the terminating null byte (\0) at the end of `dest`, and then adds a terminating null byte
   * Returns a pointer to the resulting string `dest`

* **1. strncat**
  * [1-strncat.c](./1-strncat.c): C function that implements strncat() from string.h as part of the C standard library. 

* **2. strncpy**
  * [2-strlen.c](./2-strlen.c): C function that copies a string.

* **3. strcmp**
  * [3-strcmp.c](./3-strcmp.c): C function that compares 2 strings

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  * [4-rev_array.c](./4-rev_array.c): C function that reverses the content of an array of integers

* **5. Always look up**
  * [5-string_toupper.c](./5-string_toipper.c): C function that changes all lowercase letter of a string to uppercase.

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  * [6-cap_string.c](./6-cap_string.c): C function that capitalizes all words of a string

* **7. Mozart composed his music not for the elite, but for everybody**
  * [7-leet.c](./7-leet.c): C program that converts a string to `1337`

* **8. rot13**
  * [100-rot13.c](./100-rot13.c): C function that encodes a string using `rot13`

* **9. Numbers have life; they're not just symbols on paper**
  * [101-print_number.c](./101-print_number.c): C function that prints an integer

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  * [102-magic.c](./102-magic.c): Add one line to this code, so that the program prints `a[2] = 98`, followed by a new line.
    * You are not allowed to use the variable `a` in your new line of code
    * You are not allowed to modify the variable `p`
    * You can only write one statement
    * You are not allowed to use `,`
    * You are not allowed to code anything else than the line of expected line of code at the expected line
    * Your code should be written at line 19, before the ;
    * Do not remove anything from the initial code (not even the comments)
    * and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)

* **11.  It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * [103-infinite_add.c](./103-infinite_add.c): C functions that add two numbers.
    * Where `n1` and `n2` are the two numbers
    * `r` is the buffer that the function will use to store the result
    * `size_r` is the buffer size
    * The function returns a pointer to the result
    * You can assume that you will always get positive numbers, or `0`
    * You can assume that there will be only digits in the strings `n1` and `n2`
    * `n1` and `n2` will never be empty
    * If the result can not be stored in `r` the function must return `0`
