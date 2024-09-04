# AUTOMATIC AND DYNAMIC MEMORY ALLOCATION (_malloc_ and _free_)

**malloc** - c function used to allocate and reserve a specified amount of memory by a program during execution. It does this by requesting for the specified amount of memory from the **heap** and if the request is granted: 

			1. OS reserves the requested amount of memory
			2. Malloc returns a pointer to the reserved space.

**free** - Calling this function returns the amount of memory previously requested through malloc to the OS when it is no longer needed by the program.


### Automatic allocation

- Automatic allocation of memory occurs in instances such as:
		
		- In variable declarations
		- when using strings within doule quotes.

	whereby the program takes care of all the memory allocations and the user does not necessarily need to worry about memory allocation.

	When the program finishes execution and control is returned to the calling function, the automatically-allocated memory is automatically released for future use.

				

#### special case: String literals

Memory used to store strings within double quotes `" "` is handled in a special way: 

for example:  
		``C 
			
			char *str;

			str = "Everton";

		```

Here, the string _Everton_ that is declared is stored automatically in memory when the program is executing. However, this memory is **only readable**. 
		``C
			str[1] = 'x';
		```
Trying to change  a character in the manner above results in a segmentation fault error. This is because the variable `str` is a pointer to a char, which is initialized to the address of the first character of the string `Everton`. This string is however stored in a `read-only` memory and is also not released when the function returns.

A common way to manouver around this is by declaring variable `str` as an array, thus: 

		```
			char s[] = "Everton";

		```

Whereby the array `s` now holds a copy of the string "Everton" and it is therefore now possible to modify this copy.


##Dynamic Allocation


