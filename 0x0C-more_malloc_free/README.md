This directory focuses on more usage of malloc and also incorporates a few instances of calloc, realloc and the exit function in c.

calloc - creates memory dynamically and initializes the memory allocated unlike malloc. It however returns a pointer to                  the new memory location, just like malloc.

realloc - Reallocates memory previously allocated by malloc, calloc or even any other dynamic memory allocation.
                      Returns a pointer to the memory allocated.

exit - used to terminate a program. Takes an integer as a parameter and works really closely to the return function.
            the only difference is that it terminates the whole program and not just the function it is used in. Return
                statement returns the value in it to the main and execution continues or stops depending on the value.
                          with exit however, the value is returned to the operating system and affects the whole program


Heres the projects in this directory:

0-malloc_checked.c -> A function that allocates memory using malloc and returns a pointer to the allocated memory.


1-string_nconcat.c -> A function that concatenates two strings. Returned pointer points to a newly allocated space in
                        memory that contains s1, followed by firs n bytes of s2 and null terminated.


2-calloc.c -> A function that allocates memory for an array, using malloc.


3-array_range.c -> A function that creates an array of integers containing all the values from min to max, ordered 
                     from min to max and return the pointer to the newly created array.
