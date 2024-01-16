# C -argc, argv

This repo contains code written to understand `argc` and `argv`.

When a program gets executed, the user can specify the space-separated strings called command-line arguments. These arguments are made available in the program’s `main` function and can be parsed as individual null-terminated strings. To access the arguments, we should include parameters as `int argc`, `char *argv[]`, representing the number of arguments passed and the array of strings containing command-line arguments. The first string in the array is the program name itself as per the convention; thus, the number of arguments `argc` includes the program name. We can print every command-line argument with simple iteration through `argv` array, as demonstrated in the following example.

```
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    exit(EXIT_SUCCESS);
}
```

Sample command:

`./program_name hello there`

Output:

```
argv[0] = ./program
argv[1] = hello
argv[2] = there
```

`argv` array of null-terminated strings is terminated with a `NULL` pointer to denote the last argument. Thus, we can utilize this feature to implement the argument printing loop by evaluating the `argv` pointer itself and incrementing it until equals `NULL`. Note that it’s better to make a separate `char*` pointer for the loop to preserve the array’s original address in case it’s needed later in the program. The following sample code assumes the same command is executed as in the previous example.

```
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char **ptr;
    for (ptr = argv; *ptr != NULL; ptr++)
        printf("%s\n", *ptr);

    exit(EXIT_SUCCESS);
}
```


## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

## Tasks :page_with_curl:

* **0. It ain't what they call you, it's what you answer to**
  * Program that prints its name, followed by a new line.
    * If you rename the program, it will print the new name, without having to compile it again
    * You should not remove the path before the name of the program

* **1. Silence is argument carried out by other means**
  * Program that prints the number of arguments passed to it.

* **2. The best argument against democracy is a five-minute conversation with the average voter**
  * Program that prints all arguments it receives.
    * All arguments should be printed, including the first one
    * Only print one argument per line, ending with a new line
 
* **3. Neither irony nor sarcasm is argument**
  * Program that multiplies two numbers.
    * Your program should print the result of the multiplication, followed by a new line
    * You can assume that the two numbers and result of the multiplication can be stored in an integer
    * If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

* **4. To infinity and beyond**
  * Program that adds positive numbers.
    * Print the result, followed by a new line
    * If no number is passed to the program, print `0`, followed by a new line
    * If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
    * You can assume that numbers and the addition of all the numbers can be stored in an `int`

* **5. Minimal Number of Coins for Change (Greedy Algorithm)**
  * Program that prints the minimum number of coins to make change for an amount of money.
    * Usage: `./change cents`
    * where `cents` is the amount of cents you need to give back
    * if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
    * you should use `atoi` to parse the parameter passed to your program
    * If the number passed as the argument is negative, print `0`, followed by a new line
    * You can use an unlimited number of coins of values `25`, `10`, `5`, `2`, and `1` `cent`

