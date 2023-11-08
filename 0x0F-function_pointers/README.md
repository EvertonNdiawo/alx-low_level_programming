This is a directory for function pointers and what we can do with them.

A function pointer points to other functions

They can also be used as function parameters and arguments and even as a return type of functions.

declaration:

their declaration takes the form of ;

              return_type_of_function_they_point-to (*function_pointer_name)(parameter types);

        e.g.  int (*add_ptr)(int, int);


initialization: 

function pointers can be initialized with the address of a compatible function.

e.g.    int add(int a, int b)
        {
             return (a + b);
        }


  int (*add_ptr)(int, int) = &add;   // initializes the add_ptr function with the address of the original function, add.




Function call:


        The original function can be called through the pointer function just like it would have been called directly.

        e.g. int result = add_ptr(3, 4); /* calls the original add function through the add_ptr function pointer.*/


Array of function pointers: 

             It is also possible to have an array of function pointers

             e.g. int (*process[])(int, int) = {add, substract, multiply}; 

                    declares and initializes an array "process" of functions that accept two ints as parameters/                            arguments and return int type.
                    
                    Here, add, substract and multiply are all functions.
