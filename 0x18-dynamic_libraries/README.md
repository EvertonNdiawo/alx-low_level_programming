# C: Dynamic Libraries

## introduction:

- There are two types of libraries with the C programming language:
	- Static library (.a file type)
	- ___Dynamic library___ (.so file type)

- The difference between these libraries comes in how they are created, how the data in them are stored and accessed in them etc.Here's several differences in depth:
	- Static library is created using the `ar` program with `gcc`. Dynamic library is however created by using the `-shared' flag in alongside already compiled object files.
	- Dynamic library is sort of passed by reference, i.e the address to the path where the library is located is passed to the final executable and thus making the use of dynamic libraries result in better performance. With a static library however, the code in the library is included in the final executable.
	- Updating any component in the dynamic library does not result in recompiling the library whereas with the static library, a change in code for any of the files used in creation of the library necessitates for the reconstitution of the library.

__NB:__ Dynamic libraries are also known as `shared` libraries and there exists an interface in python through which these libraries can be accessed and C code and python code utilised in a program. 

## naming conventions for libraries:

A library such as `FOO` is generally named;
	1. libFOO.a -> if it is a static library
	2. libFOO.so -> if it is a dynamic(shared) library.
	This allows the gcc compiler to correctly identify the library during runtime.

## How to create a dynamic library in C:

1. Compile source files to create object codes(.o)
	```
		gcc -c -fPIC file1.c file2.c ... filex.c
	```

	the flag -fPIC instructs the compiler to generate `Position Independent Code`, that can be accessed anywhere. This is required for creation of shared libraries.

	gcc compiler sets the `PIC` option by default and to disable it, 
	```
		gcc -c -fno-PIC file1.c file2.c ... filex.c
	```
	this results into generation of object codes that are `Position dependent` i.e not position independent and thus not accessible from anywhere.


2. Build the library from the resultant object files( i.e created .o files) using the `-shared` flag.
	```
		gcc -shared -o libFCT.so *.o
	```

	this creates a library, FCT.so that is a shared library comprising all the object files in the current working directory. i.e file1.o file2.o, filex.o etc.

## Calling a created library:

1. Create executable:
	```
	gcc -c call_FCT.c
	```

2. Link created code(call_FTC.o) with the library:
	```
	gcc -o call_Dynamic call_FCT.o -L./-lFCT
	```

	-  The flag (-L) indicates where the library is to be found.
	-  The flag (-l) specifies the library.

## Running an executable linked to a (.so) file:

Running the (call_Dynamic) program should be:

(i) call_dynamic
	or

(ii) ./call_Dynamic if "."(The current directory) where call_Dynamic is in is not in the PATH variable.

To ensure the shared library is always found at runtime, its directory must be in the varible PATH:
`LD_LIBRARY_PATH` by:

```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```

## soname of a library:

- This is a versioning system that is stored within a shared library during its creation. 
- It is of the form, `libraryName.so.X.Y` where X is the version that determines compatibility and Y is used for further versioning. i.e libraries of the same X number would be compatible with each other irregardless of their Y version number e.g `someLibrary.2.5` and `someLibrary.2.6` would be compatible wheres `someLibrary.2.5` and `someLibrary.3.5` would not be.

- To display the soname of a library file like someLibrary: 
	```
	objdump -p someLibrary | grep SONAME
	```

# Project tasks:

0. A library is not a luxury but one of the necessities of life.
	- Create the dynamic library libdynamic.so containing all th functions listed below:
		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);



1. Without libraries what have we?We have no past and no future.

- Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.


2. Let's call C functions from Python.
- Create a dynamic library that contains C functions that can be called from Python.


3. Code injection: Win the Giga Millions!

- I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

	- Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:


- ```
	/* Giga Millions program                                                                                    
  	* Players may pick six numbers from two separate pools of numbers:                                                
  	* - five different numbers from 1 to 75 and                                                                       
  	* - one number from 1 to 15                                                                                       
  	* You win the jackpot by matching all six winning numbers in a drawing.                                           
  	* Your chances to win the jackpot is 1 in 258,890,850                                                             
  	*                                                                                                                 
  	* usage: ./gm n1 n2 n3 n4 n5 bonus
```

	- You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
	- The system is an Linux Ubuntu 16.04
	- The server has internet access
	- Our mole will be only able to run two commands from a shell script, without being detected by MSS
	- Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
	- Our mole has only the authorization to upload one file on the server. It will be your shell script
	- Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
	- Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
	- MSS will use the same terminal and session than our mole
	- Before running the gm program, MSS always check the content of the directory
	- MSS always exit after running the program gm
TL;DR; This is what is going to happen.



# THE END...
