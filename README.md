# Shared Friends as a 2-Party Computation problem using Obliv-C

## Prerequisites
* [Obliv-C](https://github.com/samee/obliv-c) compiler
* [cycle](https://github.com/samee/cmd) command

## Compile and run the program
### Compile the code
    $ oblivcc hw.c hw.oc util.c util.oc -I
  
### Run the executable file
    $ cycle './a.out 1 alice bob carl | ./a.out 2 bob david'
Remember that the two parties need to be set with IDs equal to 1 and equal to 2 respectively

## Example
$ cycle './a.out  1 alice bob carl john david jack | ./a.out 2 bob david alex luke '
