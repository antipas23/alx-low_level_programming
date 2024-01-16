# C - Static libraries

This repo contains a static library with object files. These object files contain functions, variables and source code as listed below.

For more info on how to create static libraries, visit these links: https://www.howtogeek.com/427086/how-to-use-linuxs-ar-command-to-create-static-libraries/ and 
https://www.youtube.com/watch?v=eW5he5uFBNM

**Static library:**
 - Windows (`.lib`) - Library
 - Linux (`.a`) - Archive

**Dynamic library:**
 - Windows (`.dll`) - Dynamic linked library
 - Linux (`.so`) - Shared object

**Benefits of dynamic linking over static linking:**
 - We can have `.exe` files that link to several functions in a separate library (or libraries) meaning we don't have large `.exe` files. Dynamic linking stores the address of these functions in the `.exe` rather than the compiled function.
 - No need to recompile the `.exe` whenever we change a function in a library.

To find out more on static functions: https://www.geeksforgeeks.org/what-are-static-functions-in-c/

## Tests :heavy_check_mark:

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libmy.a](./libmy.a): C Static library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libmy.a`.

* **1. Without libraries what have we? We have no past and no future**
  * [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static
  library called `liball.a` from all the `.c` files in the current directory.
