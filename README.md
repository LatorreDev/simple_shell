0x15. C - Simple Shell

### Description
**A simple UNIX command interpreter.**
* Displays a prompt and waits for the user to type a command.Command line always
  ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semi-columns, no pipes, no redirections or
  any other advanced features.
* If an executable cannot be found, prints an error message and displays the
  prompt again.
* Handles errors.
* Handles the “end of file” condition (Ctrl+C).
* Handles command lines with arguments.
* Handles the PATH.
* Implements the exit buit-in, that exits the shell (Usage: exit).
* Implements the env built-in, that prints the current environment.

### Files

|   **Files**   |   **Description**   |
| -------------- | --------------------- |
| micro_shell.c | main file with principal function to invoke the shell |
| microshell.h | header file with structures, libraries and prototypes|
| ctrl.c | "include description file" |
| exit_function.c | "include description file" |
| AUTHORS | file generated with the respective script |
| generate_authors.sh | script to generate file AUTHORS content |


### Requirements
* Allowed editors: ```vi```, ```vim```, ```emacs```
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with ```gcc 4.8.4``` using the flags
  ```-Wall``` ```-Werror``` ```-Wextra``` ```and -pedantic```
* All files should end with a new line
* Code should use the ```Betty``` style it will be checked using[betty-style.pl]
  (https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)
  and [betty-doc.pl]
  (https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* All header files should be include guarded
* Authorized functions and system calls:

  * ```access``` (```man 2 access```)
  * ```chdir``` (```man 2 chdir```)
  * ```close``` (```man 2 close```)
  * ```closedir``` (```man 3 closedir```)
  * ```execve (```man 2 execve```)
  * ```exit``` (```man 3 exit```)
  * ```fork``` (```man 2 fork```)
  * ```free``` (```man 3 free```)
  * ```stat``` (```man 2 stat```)
  * ```lstat``` (```man 2 lstat```)
  * ```fstat``` (```man 2 fstat```)
  * ```getcwd``` (```man 3 getcwd```)
  * ```getline``` (```man 3 getline```)
  * ```kill``` (```man 2 kill```)
  * ```malloc``` (```man 3 malloc```)
  * ```open``` (```man 2 open```)
  * ```opendir``` (```man 3 opendir```)
  * ```perror``` (```man 3 perror```)
  * ```read``` (```man 2 read```)
  * ```readdir``` (```man 3 readdir```)
  * ```signal``` (```man 2 signal```)
  * ```strtok``` (```man 3 strtok```)
  * ```wait``` (```man 2 wait```)
  * ```waitpid``` (```man 2 waitpid```)
  * ```wait3``` (```man 2 wait3```)
  * ```wait4``` (```man 2 wait4```)
  * ```write``` (```man 2 write```)
  * ```_exit``` (```man 2 _exit```)
  * ```isatty``` (```man 3 isatty```)
  * ```fflush``` (```man 3 fflush```)


### More Info
### Output
Unless specified otherwise, your program must have the exact same output
as ```sh``` (```/bin/sh```) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be
equivalent to your ```argv[0]```

Example of error with ```sh```:

$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$

Same error with your program:

$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$