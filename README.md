A group project that requires us to create a printf function locally.

Creating a repository as a group while exihibiting collaboration.

We're required to do the following;

compile our code using $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

Our main files will include your main header file (main.h): #include main.h

You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:

We strongly encourage you to work all together on a set of tests

If the task does not specify what to do with an edge case, do the same as printf
