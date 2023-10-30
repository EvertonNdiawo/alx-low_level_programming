These tasks delve into dynamic memory allocation through the use of malloc and free functions.

0-create_array.c -> A function that creates an array of characters, and initializes it with a specific char.

1-strdup.c -> A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memmory of the new string is obtained with malloca and can be freed with free.On success, it returns a pointer to the duplicated string. It returns Null if insufficient memory was available.

2-str_concat.c -> A function that concatenates two strings.The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated. If NULL is passed, to be treated as an empty string. Function returns NULL on failure.

3-alloc_grid.c -> A function that returns a pointer to a 2 dimensional array of integers. Each ellement of the grid should be initialized to 0. Functio returns NULL on failure. If width or height is 0 or negative, return NULL.

4-free_grid.c -> A function that frees a 2 dimensional grid previously created by alloc_grid function.

100-
