# C++

## Compile
`g++ -o calculate-iva calculate-iva.cpp`

## Header files
Code reusing between diffent files is not straightforward as in other languages such as Javascript or Python.

C++ requires to create a header file. A header file contains the declarations of the reusable content (ex: functions, constants).

Header files with *.h extension come from C standard library, C++ should use *.hpp.

Example `functions.cpp`:
```
void welcome() {
    std::cout << "Welcome" << std::endl;
}
```

`functions.hpp`:
```
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

void welcome();

#endif
```

`main.cpp`:
```
#include <iostream>
#include "functions.hpp"

...
```

## Types
1. When you define an `string` as `char` array, you have to specify the last character as null `\0`. 

## Libraries

`curse.h` is the equivalent library for `conio.h` in Linux, and it can be installed with `sudo apt-get install libncurses5-dev libncursesw5-dev`. Both are used to create text user interfaces.

Another library to do the same is `stdlib.h` with the instruction `system("pause")`.

`unistd.h` contains the function `sleep` to stop the execution for a certain seconds.

### `string.h`
`string.h` contains the functions:
- `strlen` to determine the size of a string.
- `strcpy` to copy the contents of one string to another.

## Native functions

`rand` is for generating random numbers.
`srand` is for setting a seed for the rand function.
`time` returns the current timestamp. If the number is 0, returns the value, otherwise it should receive a pointer to a `time_t` object to store the value in int.
`sizeof` returns the length of an array.
`fgets`reads stdin including whitespaces. 
`cin.getline`reads stdin including whitespaces. 

## Arrays
C++ arrays come from C arrays. C arrays are which are very primitive and simple. Arrays in C doesn't have bound checking, so you can access to any numeric index without having an out of bounds exception unlike Java (but you'd be accessing some random ram address). This is a design decision (`it's a feature, not a bug!`) because accessing an index out of bounds is considered a non defined behaviour. Moreover it follows the C principle `don't pay for what you don't use`, if the code is correct, you shouldn't be forced to use a bound-checking system.

Accessing to out of bounds indexes works in the following way:
- Define an array of X of N positions.
- C only stores the address of the first element, let's say 0x1000.
- When you access the first element, C will search the 0x1000 adress. The array starts at 0x1000 and the first element goes from 0x1000 to 0x1003 (4 bytes).
- When you want to access the second elment (let's wonder that it's an integer array) will calculate the address of the next elemnt, i.e, it'll sum 4 bytes to the original address, 0x1004.

C accesses raw the start address and calculates where the index should be located, even if it's out of bounds.