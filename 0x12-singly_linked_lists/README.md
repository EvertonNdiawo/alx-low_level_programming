# Singly Linked Lists

### Explanation

- Linked lists are a data structure in c programming language used to represent information either in links to each other, in circular trajectory or in a manner in which the item in between two items can have acccess to data on either side of it.

- Linked lists incorporate the concepts of __structures__, __typedef__ and __pointers__ to achieve this task.Be sure to look up these concepts before delving into tasks in this directory.

- A singly linked list is in such a manner that the node has two parts, the data and the pointer to the next node in the list.

- The list also contains the first node that is simply a pointer to the first actual node.This can technically be reffered as the list since it is the head of the list.

- The last item in the list points to NULL and is considered the tail of the list.

### example of code to create a structure for the singly linked list.

```c
	struct node{
		int data;
		struct node *next;
	}
```

## **Project tasks**


#### ***Mandatory***

___0-print_list.c___
- prototype: `size_t print_list(const list_t *h);`
- Prints all the elements of a `list_t` list.
- Returns the number of nodes.
- If `str` is `NULL`, prints `[0] (nil)`.
- `printf` function allowed.

___1-list_len.c___ 
- Returns the number of elements in a linked `list_t` list.
- prototype: `size_t list_len(const list_t *h);`

___2-add_node.c___
- Adds a new node at the beginning of a `list_t` list.
- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Returns: the address of the new element, or `NULL` if failure.
- `str` needs to be duplicated.
- `strdup` function allowed.

___3-add_node_end.c___ 
- Function that adds a new node at the end of a `list_t` list.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Returns the address of the new element, or `NULL` if failure.
- `str` needs to be duplicated.
- `strdup` function allowed.

___4-free_list.c___
- Function that frees a `list_t` list.
- Prototype: `void free_list(list_t **head);



#### ***Advanced***

___100-first.c___
- A function that prints ***You're beat! and yet, you must allow, |nI bore my house upon my back!\n*** before the `main` function is executed.
- `printf` function allowed.

___101-hello_holberton.asm___
- A 64-bit prigram in assembly that prints ***Hello, Holberton***, followed by a new line.
- `printf` function allowed.
- use of interrupts not allowed.
- Program to be compiled using `nasm` and `gcc`.
