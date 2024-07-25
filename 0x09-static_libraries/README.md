In this directory, I get to work with static libraries in C.

From what I have understood through the various resourses I have employed, a static library contains an archive of several objet files that can then be used during runtime in conjunction with other object files as opposed to having to compile these object files every time they are required by a certain program during runtime.

How to create: 

Static libraries are created using the format, "ar static-lib_name.a file1.o file2.o fileN.o"
This creates a static library named static-lib_name.a that contains object files file1.o, file2.o and fileN.o.

How to create and add an index to a static library:

Indexing is done to update the static library objects in case new files have been added to the library or some files removed from it. The format used to update the index of the library takes the format, "ranlib static-lib_name.a"

Using the library in a program: 

Now in order to use the library with a program, thhe format is, "gc 0-main.o -L -static-lib_name -o prog" 

This uses the static library static-lib_name.a together with the file 0-main.o object file to generate an executable file named as prog. Here -L is a linear flag modifier." 

The list of files in this project are listed below:

1. libmy.a - a static library that contains a specified number of functions.

2. create_static_lib.sh - A shell script that creates a static library called liball.a from all the .c files that are in the current directory.
