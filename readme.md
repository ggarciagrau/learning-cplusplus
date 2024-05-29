# Compile
`g++ -o calculate-iva calculate-iva.cpp`

## Libraries

`curse.h` is the equivalent library for `conio.h` in Linux, and it can be installed with `sudo apt-get install libncurses5-dev libncursesw5-dev`. Both are used to create text user interfaces.

Another library to do the same is `stdlib.h` with the instruction `system("pause")`.

`unistd.h` contains the function `sleep` to stop the execution for a certain seconds.

## Native functions

`rand` is for generating random numbers.
`srand` is for setting a seed for the rand function.
`time` returns the current timestamp. If the number is 0, returns the value, otherwise it should receive a pointer to a `time_t` object to store the value in int.