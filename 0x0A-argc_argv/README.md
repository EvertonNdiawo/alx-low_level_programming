In this directory, I am working with arguments to the main program. Previously its all been main(void), now i'm going to learn how to pass arguments to the main function. 

Argc - is an integer that contains the number of arguments passed to a function, say like the main function.

Argv[] - on the other hand is an array of size argc of arguments that are passed to a function like main.

example in use, int main(argc, **argv)
 could also be, int main(argc, *argv[])

in order to run a project with arguments, we run the object file of the program followed by arguments, seperated by spaces. 

        e.g say we have a program named 0-main we run ./0-main string_arg1 string_arg2.....string_argn


        from this, should we happen to check out the element at argv[0], it contains the first command "./0-main"

        the element at argv[1] = string_arg1 and so on...

        suppose with the same example we try to return the value of argc, we find that argc = total number of arguments
        passed to the function, inclusive of "./0-main" 

        A string in parenthesis eg "My school" is considered as one argument despite the spaces in between the words in          the string.

Now for these projects, i'll give a short description of each program an what it does.


0-whatsmyname.c -> A program that prints its name, followed by a new line.Suppose the program is renamed, it prints the                      new name, without having to compile it again. the path before the name
                         of the program is not removed.


1-args.c -> A program that prints the number of arguments passed into it.It prints a number followed by a new line.


2-args.c -> A program that prints all arguments it receives. All arguments are printed, including the first one. Only
              prints one argument per line, ending with  a new line.

3-mul.c -> A program that multiplies two integers, prints the result of the multiplication followed by a new line.Prints             error in case it does not receive two arguments, followed by a new line, and returns 1.

4-add.c -> A program that adds positive numbers, prints the results, followed by a new line. If no numbers are
             passed to the program, it prints 0, followed by a new line. If one of the numbers contains symbols that are                    not digits, it prints Error, followed by a new line, and returns 1.

