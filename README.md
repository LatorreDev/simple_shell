### Description
**A simple UNIX command interpreter.**
micro_shell is the user interface to communicate with the operative system services, and also, has his own language (scripting language) called bash scripting , all of this are built in C (C, not C++ ;) ) under the hood.

### Requirements
* Gcc (gnu compiler collection) version 4+

### Included .c source code
* microshell.h - For libraries and prototypes
* micro_shell.c - main code for the microshell
* _strcmp.c - source code for string compare
* _strconcat.c - source code for concatenate strings
* ctrlc.c - source code for avoid the ctrl+c
* exit.c - source code for implement the exit function to close the micro shell

### Compiling
```
gcc -g -Wall -Werror -pedantic *.c -o shell --debug
```
### Running
```
./shell
```
### Output
For now Micro_shell only run with single commands without arguments and you need to specify the folder.

##### Example:
```
$ /bin/ls
```
for list the files in the current directory or

```
$ /bin/pwd
```
for display the current directory address

### How to exit
You have two forms to exit from micro_shell, just type exit
```
$ exit
```
You can press CTRL + d
```
$ ./shell: Success
```