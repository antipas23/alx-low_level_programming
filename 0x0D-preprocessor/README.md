# C - Preprocessor

This repo contains code written to understand the compilation process, preprocessor directives in C and macros.

## Include Guard in C

It's a preprocessor macro.

All of it is preprocessor syntax, that basically says, if this macro has not already been defined, define it and include all code between the `#ifndef` and `#endif`

What it accomplishes is preventing the inclusion of file more than once, which can lead to problems in your code.

It's OK to forget it because it's still legal `C` code without it. The preprocessor processes your file before it's compiled and includes the specified code in your final program if there's no logic specifying why it shouldn't. It's simply a common practice, but it's not required.

A simple example might help illustrate how this works:

Your header file, `header_file.h` we'll say, contains this:

```
#ifndef HEADER_FILE
#define HEADER_FILE

int two(void){
    return 2;
}

#endif
```

In another file `foo.c`, you might have:

```
#include "header_file.h"

void foo() {
    int value = two();
    printf("foo value=%d\n", value);       
}
```

What this will translate to once it's "preprocessed" and ready for compilation is this:

```
int two(void){
    return 2;
}

void foo() {
    int value = two();
    printf("foo value=%d\n", value);       
}
```

All the include guard is accomplishing here is determining whether or not the header contents between the `#ifndef ... and #endif` should be pasted in place of the original #include.

## Tasks :page_with_curl:

* **0. Object-like Macro**
  * Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

* **1. Pi**
  * Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

* **2. File name**
  * Write a program that prints the name of the file it was compiled from, followed by a new line.
 
* **3. Function-like Macro**
  * Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

* **4. SUM**
  * Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

**Note**:
Always use the guards `#ifndef FILE_NAME_H` followed by `#define FILE_NAME_H` at the beginning of all header files and end with `#endif` to prevent compilation errors.

