# Shared Friends as a 2-Party Computation problem using Obliv-C

## Prerequisites
* [Obliv-C](https://github.com/samee/obliv-c) compiler
* [cycle](https://github.com/samee/cmd) command

## Compile and run the program
### Compile the code
    $ oblivcc hw.c hw.oc util.c util.oc -I
  
### Run the executable file
    $ cycle './a.out 1 alice bob carl | ./a.out 2 bob david'
Remember that the two parties need to be set with IDs equal to 1 and equal to 2 respectively.
Moreover, strings are case sensitive and hence 'alice' is different from 'Alice'

## Example
    $ cycle './a.out  1 alice bob carl john david jack | ./a.out 2 bob david alex luke '
    
    # 11323 Gates have been used by party 2.

    # 11323 Gates have been used by party 1.

    # Time Spent by party 1: 0.049797 s

    # Number common Friends evaluated by Party 1: 2
    # 1 - bob
    # 2 - david


    # Time Spent by party 2: 0.170891 s

    # Number common Friends evaluated by Party 2: 2
    # 1 - bob
    # 2 - david
    
### Explanation
1. The number of gates used by the protocol is equal to 11323
2. The time spent by the party 1 to compute the common friends with the counterpart is equal to 0.049797 seconds
3. The list of party one's shared friends is composed by bob and david
4. The time spent by the party 2 to compute the common friends with the counterpart is equal to 0.170891 seconds
5. The list of party one's shared friends is composed by bob and david
