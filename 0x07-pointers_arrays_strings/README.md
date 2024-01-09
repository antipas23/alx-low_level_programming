# C -Even more pointers, arrays, strings

This repo contains C software written to implement different functions. There is no use of a standard library.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                              |
| ------------------------ | --------------------------------                       |
| `0-memset.c`             | `char *_memset(char *s, char b, unsigned int n);`      |
| `1-memcpy.c`             | `char *_memcpy(char *dest, char *src, unsigned int n);`|
| `2-strchar.c`            | `char *_strchr(char *s, char c);`                      |
| `3-strspn.c`             | `unsigned int _strspn(char *s, char *accept);`         |
| `4-strpbrk.c`            | `char *_strpbrk(char *s, char *accept);`               |
| `5-strstr.c`             | `char *_strstr(char *haystack, char *needle);`         |
| `7-print_chessboard.c`   | `void print_chessboard(char (*a)[8]);`                 |
| `8-print_diagsums.c`     | `void print_diagsums(int *a, int size);`               |
| `100-set_string.c`       |  `void set_string(char **s, char *to);`                |

## Code :page_with_curl:

* **0. memset**
  * [0-memset.c](./0-memset.c): C function that fills memory with a constant byte.
    * The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    * Returns a pointer to the memory area `s`

* **1. memcpy**
  * [1-memcpy.c](./1-memcpy.c): C function that copies memory area.
    * The `_memcpy()` function copies n bytes from memory area src to memory area dest
    * Returns a pointer to dest 

* **2. strchr**
  * [2-strchr.c](./2-strchr.c): C function that locates a character in a string. Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found
 
* **3. strspn**
  * [3-strspn.c](./3-strspn.c): C function that gets the length of a prefix substring. Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

* **4. strpbrk**
  * [4-strpbrk.c](./4-strpbrk.c): C function that searches a string for any of a set of bytes.
    * The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
    * Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

* **5. strstr**
  * [5-strstr.c](./5-strstr.c): C function that locates a substring
 
* **6. Chess is a mental toture**
  * [7-print_chessboard.c](./7-print_chessboard.c): C function that prints a chessboard

* **7. The line of life is a ragged diagonal between duty and desire**
  * [8-print_diagsums.c](./7-print_diagsums.c): C function that prints the sum of the two diagonals of a square matrix of integers.

* **8. Double pointer, double fun**
  * [100-set_string.c](./100-set_string.c): C function that sets the value of a pointer to a char

* **9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure**
  * [101-crackme_password](./101-crackme_password): Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
    * Your file should contain the exact password, no new line, no extra space
    * `ltrace`, `ldd`, `gdb` and `objdump` can help
    * You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
    * Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` .Then `sudo apt update` and `sudo apt install libssl1.0.0`



