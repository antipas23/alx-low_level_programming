# C -Recursion

This repo contains C software written to implement different recursive functions. There is no use of a standard library.

[Learn more here](https://youtu.be/IJDJ0kBx2LM?si=qMtfKxclVRXJu_g2)

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                              |
| ------------------------ | --------------------------------                       |
| `0-puts_recursion.c`     | `void _puts_recursion(char *s);`                       |
| `1-print_rev_recursion.c`| `void _print_rev_recursion(char *s);`                  |
| `2-strlen_recursion.c`   | `int _strlen_recursion(char *s;`                       |
| `3-factorial.c`          | `int factorial(int n);`                                |
| `4-pow_recursion.c`      | `int _pow_recursion(int x, int y);`                    |
| `5-sqrt_recursion.c`     | `int _sqrt_recursion(int n);`                          |
| `6-is_prime_number.c`    | `int is_prime_number(int n;`                           |
| `100-is_paindrome.c`     | `int is_palindrome(char *s);`                          |
| `101-wildcmp.c`          |  `int wildcmp(char *s1, char *s2);`                    |

## Code :page_with_curl:

* **0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**
  * [0-puts_recursion.c](./0-puts_recursion.c): C function that prints a string, followed by a new line.

* **1. Why is it so important to dream? Because, in my dreams we are together**
  * [1-print_rev_recursion.c](./1-print_rev-recursion.c): C function that reverses a string.

* **2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
  * [2-strlen_recursion.c](./2-strlen_recursion.c): C function that returns the length of a string.
 
* **3. You mustn't be afraid to dream a little bigger, darling**
  * [3-factorial.c](./3-factorial.c): C function that calculates the factorial of a number.

* **4. Once an idea has taken hold of the brain it's almost impossible to eradicate**
  * [4-pow_recursion.c](./4-pow_recursion.c): C function that returns the value of x raised to the power of y.

* **5. Your subconscious is looking for the dreamer**
  * [5-sqrt_recursion.c](./5-sqrt_recursion.c): C function that returns the natural square root of a number
 
* **6. Inception. Is it possible?**
  * [6-is_prime_number.c](./6-is_prime_number.c): C function that returns `1` if the input integer is a prime number, otherwise return `0`.

* **7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything**
  * [100-is_palindrome.c](./100-is_palindrome.c): C function that returns `1` if a string is a palindrome and `0` if not.

* **8. Inception. Now, before you bother telling me it's impossible...**
  * [101-wildcmp.c](./101-wildcmp.c): C function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
    * s2 can contain the special character `*`.
    * The special char `*` can replace any string (including an empty string)
