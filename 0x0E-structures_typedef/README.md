# 0X0E. C - Structures, typedef

### Explanation.

***Structures*** are a data structure in C programmming language that allows grouping of different data types together, much like an array only that arrays group items of the same type.

***typedef*** is a way of specifying an alias for an identifier in C programming language. For instance;

```
	struct dog my_dog;

```

could be declared as: 

```
	typedef struct dog my_dog;
```

and would therefore provide an alias for the identification of struct dog and therefore instead of identifying it as `struct dog`, one would only need to write `my_dog` when using an instance of struct dog.

## Example code
In this example, we define a structure called **date** that consists of three components that represent the `month`, `day` and `year`.

```
	struct date {
		int month;
		int day;
		int year;
	};
```

This particular structure contains three integer **members** called Month, day and year.

From this example then, a user can then declare new variables as date now becomes a user defined variable just like int, char or any other basic types.

```
	struct date today;
```
This statement declares a new variable, `today` of type date.

#### Accessing  members.

1. Members of a structure type are accessed using two methods, the dot operator, whereby you specify the variable name, followed by a dot and finally the member to be accessed.

```
	today.day = 21;
	today.year = 2024;
	today.month = June;

	if (today.month = 1)
	{
		nextMonth = 2;
	}
```

2. Members can also be accessed through a pointer, in a manner described below:

```
	struct point {
		int x;
		int y;
	};

	struct point my_point = {3, 7};
	struct point *p = &my_point;
```
- Here, the member y of the variable my_point can be set to 98 by;

	- p->y = 98 : The `->` operator is used to access members of the structure that `p` points to.
	- my_point.y = 98: Directly accesses the `y` member of the `my_point` structure.
	- (*p).y = 98: p is a pointer to `my_point` so (*p) dereferences the pointer and then `.y` accesses the y member.


*NOTE:* the operator `->` can only be used with pointers to access the members of a structure variable.


# Tasks

**1-init_dog.c**

- A function that initialize a variable of type `struct dog`

**2-print_dog.c**

- A function that prints a `struct dog`

**4-new_dog.c**

- A function that creates a new dog.

	- Stores a copy of `name` and `owner`
	- Returns `NULL` if the function fails.

**5-free_dog.c**

- A function that frees dogs.


# The END
