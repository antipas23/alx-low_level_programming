# C - Function pointers

This repo contains code written to understand function pointers.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [function_pointers.h](./function_pointers.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                                                 |
| ------------------------ | --------------------------------                                          |
| `0-print_name.c`         | `void print_name(char *name, void (*f)(char *));`                         |
| `1-array_iterator.c`     | `void array_iterator(int *array, size_t size, void (*action)(int));`      |
| `2-int_index.c`          | `int int_index(int *array, int size, int (*cmp)(int));`                   |

## Tasks :page_with_curl:

* **0. What's my name**
  * C function that prints a name

* **1. If you spend too much time thinking about a thing, you'll never get it done**
  * Write a function that executes a function given as a parameter on each element of an array.
    * where `size` is the size of the array
    * and `action` is a pointer to the function you need to use
  
* **2. To hell with circumstances; I create opportunities**
  * Write a function that searches for an integer.
  * where `size` is the number of elements in the array array
  * `cmp` is a pointer to the function to be used to compare values
  * `int_index` returns the index of the first element for which the `cmp` function does not return 0
  * If no element matches, return `-1`
  * If `size <= 0`, return `-1`
 
* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
  * Write a program that performs simple operations.
    * Usage: `calc num1 operator num2`
    * You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
    operator is one of the following:
    `+`: addition
    `-`: subtraction
    `*`: multiplication
    `/`: division
    `%`: modulo
    * The program prints the result of the operation, followed by a new line
    * You can assume that the result of all operations can be stored in an `int`
    * if the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
    * if the operator is none of the above, print `Error`, followed by a new line, and exit with the status `99`
    * if the user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`

    This task requires that you create four different files.

    **3-calc.h**

    This file should contain all the function prototypes and data structures used by the program. You can use this structure:

    ```
    /**
     * struct op - Struct op
     *
     * @op: The operator
     * @f: The function associated
     */
    typedef struct op
    {
        char *op;
        int (*f)(int a, int b);
    } op_t;
    ```

    **3-op_functions.c**

    This file should contain the 5 following functions (not more):

    `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b)`;
    `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b)`;
    `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b)`;
    `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b)`;
    `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b)`;

    **3-get_op_func.c**

    This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

    Prototype: `int (*get_op_func(char *s))(int, int)`;
    where `s` is the operator passed as argument to the program
    This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+") `should return a pointer to the function `op_add`

    If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`
    You are only allowed to declare these two variables in this function:
    ```
        op_t ops[] = {
            {"+", op_add},
            {"-", op_sub},
            {"*", op_mul},
            {"/", op_div},
            {"%", op_mod},
            {NULL, NULL}
        };
        int i;
    ```
    **3-main.c**

    This file should contain your `main` function only.
    You are not allowed to directly call `op_add, op_sub, op_mul, op_div or op_mod` from the main function
    You have to use `atoi` to convert arguments to `int`

* **4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker**
  * Write a program that prints the opcodes of its own main function.

   * Usage: `./main number_of_bytes`
   Output format:
   the opcodes should be printed in hexadecimal, lowercase
   If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
   If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
   You do not have to compile with any flags
   Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli.
