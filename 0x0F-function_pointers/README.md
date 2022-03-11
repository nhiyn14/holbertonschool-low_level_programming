0x0F-function_pointers directory was created  
for 0x0F. C - Function pointers project  
Holberton School Aus  
Date: 09/03/2022  
  
0-print_name.c      - function that prints a name.  
	void print_name(char *name, void (*f)(char *));  
1-array_iterator.c  - a function that executes a function given as a parameter on each element of an array  
	void array_iterator(int *array, size_t size, void (*action)(int));  
2-int_index.c       - a function that searches for an integer.  
	int int_index(int *array, int size, int (*cmp)(int));  
3-main.c            - a program that performs simple operations.  
3-calc.h            - header file for 3-main.c  
3-op_functions.c    - functions to return  
	sum of a and b. int op_add(int a, int b);  
	difference of a and b. int op_sub(int a, int b);  
	product of a and b. int op_mul(int a, int b);  
	result of the division of a by b. int op_div(int a, int b);  
	remainder of the division of a by b. Prototype: int op_mod(int a, int b);  
3-get_op_func.c     - function that selects the correct function from 3-op_functions.c  
	int (*get_op_func(char *s))(int, int);  
function_pointers.h - header file for task 0,1 and 2
