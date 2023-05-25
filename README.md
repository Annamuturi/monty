# :eagle: monty :eagle:
`monty` is an interpreter of Monty ByteCodes files, which is a scripting language just like Python.

## About the monty language
This is a language that contains specific instructions to manipulate data information (stacks or queues), where each instruction (called opcode) is sended per line. Files which contains Monty byte codes usually have the `.m` extension.

## Technologies
* Interpreter was written with C language
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on **Ubuntu 14.04 LTS**

## usage
```
To compile all file:
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
the  **synopsis** of the interpreater is the following:
```
$ ./monty [filename]
$
To run the inretpreater
$ ./monty file.m
2
1
0
0
3
2
1
$
```
## Features

### Opcodes
`monty` executes the following opsocodes:
|`opcode`|Description|
|--------|-----------|
|`push`  |Pushes an element to the stack|
|`pall`  |Prints all the values on the stack|
|`pop`   |Removes the top element of the stack|
|`queue` |Sets the format of the data to a queue (FIFO)|
|`stack` |Sets the format of the data to a stack (LIFO)|
|`pchar` |Prints the char at the top of the stack|
|`pstr`  |Prints the string starting at the top of the stack|
|`mod`   |Computes the rest of the division of the second top element of the stack by the top element of the stack|
|`nop`   |Doesn't do anything|

comment, indicated with `#` are not executed by the interpreater

### Return value
When there is no errors,`monty` return `0` otherwise `1`

## Author
`Anna wamboi Muturi`
