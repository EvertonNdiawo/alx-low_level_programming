# Explanation of argc and argv


These are parameters passed to a program through the main function. Heres a more detailed explanation of what each of them stands for and does in a program: 




## beginning of explanation:

- **argc** - stands for argument count and is an integer value that represents the total number of arguments passed through the command line to a program, inclusive of the program name.

- **argv_** - stands for argument vector which is a one-directional array of arguments passed in the form of strings or file names that contain strings of arguments passed to a program through the command line.


#### example of declaration use with main
``` 
	int main(int argc, char *argv[]);

could also be in the form: 

	int main(int argc, **argv);
```

## End of explanation





#For this projects tasks, these are the detailed explanation of what each code does:

__0-whatsmyname.c__ 
- Prints its name, followed by a new line:

	1. Renaming the program prints the new name, without having to compile it again.
	2. Does not remove the path before the name of the program.


__1-args.c__ 
- Prints the number of arguments passed into it, followed by a new line.

__2-args.c__ 
- Prints all the arguments it receives:
	
	1. All arguments should be printed, including the first one.
	2. Only prints one argument per line, ending with a new line.


__3-mul.c__ 
- Multiplies two numbers: 

	1. Prints the result of the multiplication, followed by a new line.
	2. Assumes that the two numbers and the result of the multiplication can be stored in an integer.
	3. If program does not receive two arguments, program should print <span style="color: red;">Error</span>, followed by a new line, and return **1**.


__4-add.c__ 
- Adds positive numbers:

	1. Prints the result, followed by a new line.
	2. If no number is passed to the program, prints <span style="color: red;"> 0 </span>, followed by a new line.
	3. If one of the numbers contain symbols that are not digits, prints <span style="color: red">Error</span>, followed by a new line, and returns **1**.
	4. Assumes that numbers and the addition of all the numbers can be stored in an **int**.


**100-change.c** 
- A program that prints the minimum number of coins to make change for an amount of money: 

	1. usage: <span style ="color: green;">./change cents</span>
	2. where **cents** is the amount of cents you need to give back
	3. if the number of arguments passed to the program is not exactly **1**, prints <span style="color: red;"> Error </span>, followed by a new line and returns **1**.
	4. Uses <span style ="color: green;"> `atoi` </span> to parse the parameter passed to the program.
	5. If number passed as argument is negative, prints <span style="color: red;"> 0 </span>, followed by a new line.
	6. It can use an unlimited number of coins of values 25, 10, 5, 2 and 1 cent.		
