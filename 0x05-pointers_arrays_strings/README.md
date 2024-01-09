# C - Pointers, arrays, strings

This repo contains C software written to implement different functions. There is no use of a standard library.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                              |
| ------------------------ | --------------------------------       |
| `0-reset_to_98.c`        | `void reset_to_98(int *n);`            |
| `1-swap.c`               | `void swap_int(int *a, int *b);`       |
| `2-strlen.c`             | `int _strlen(char *s);`                |
| `3-puts.c`               | `void _puts(char *str);`               |
| `4-print_rev.c`          | `void print_rev(char *s);`             |
| `5-rev_string.c`         | `void rev_string(char *s);`            |
| `6-puts2.c`              | `void puts2(char *str);`               |
| `7-puts_half.c`          | `void puts_half(char *str);`           |
| `8-print_array.c`        | `void print_array(int *a, int n);`     |
| `9-strcpy.c`             | `char *_strcpy(char *dest, char *src);`|
| `100-atoi.c`             | `int _atoi(char *s);`                  |

## Code :page_with_curl:

* **0. 98 Battery St**
  * [0-reset_to_98.c](./0-reset_to_98.c): C program that takes a pointer to an int as a parameter and updates the value it points to to `98`

* **1. Don't swap horses in crossing a stream**
  * [1-swap.c](./1-swap.c): C function that swaps the values of 2 integers. 

* **2. This report, by its very length, defends itself against the risk of being read**
  * [2-strlen.c](./2-strlen.c): C function that returns the length of a string.

* **3. I do not fear computers. I fear the lack of them**
  * [3-puts.c](./3-puts.c): C function that prints a string, followed by a new line, to `stdout`. 

* **4. I can only go one way. I've not got a reverse gear**
  * [4-print_rev.c](./4-print_rev.c): C function that prints a string in reverse, followed by a new line..

* **5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * [5-rev-string.c](./5-rev-string.c): C function that reverses a string.

* **6. Half the lies they tell about me aren't true**
  * [6-puts2.c](./6-puts2.c): C function that prints every other character of a string, starting with the first character, followed by a new line.

* **7. Winning is only half of it. Having fun is the other half**
  * [7-puts_half.c](./7-puts_half.c): Write a function that prints half of a string, followed by a new line.
  * The function should print the second half of the string
  * If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

* **8. Arrays are not pointers**
  * [8-print_array.c](./8-print_array.c): C function that prints `n` elements of an array of integers, followed by a new line. The numbers should be displayed in the same order as they are stored in the array. Numbers must be separated by comma, followed by a space.

* **9. strcpy**
  * [9-strcpy.c](./9-strcpy.c): C function that copies the string pointed to by `src`, including the terminating null byte (\0), to the buffer pointed to by `dest`.

* **10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
  * [100-atoi.c](./100-atoi.c): C function that converts a string to an integer.
  * The number in the string can be preceded by an infinite number of characters
  * You need to take into account all the `-` and `+` signs before the number
  * If there are no numbers in the string, the function must return `0`
  * Use the `-fsanitize=signed-integer-overflow` `gcc` flag to compile your code..

* **11. Don't hate the hacker, hate the code**
  * [101-keygen.c](./101-keygen.c): Create a program that generates random valid passwords for the program `101-crackme` (Crackme1).
  * More info can be found here: https://github.com/alx-tools/0x04.c


