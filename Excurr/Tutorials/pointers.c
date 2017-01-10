#include <stdio.h>

void func1(int val)
// 	BEHIND THE SCENES: 
//	automatically done: '
//			int val = x; 
//		(which we already set x = 5 down in main)
//	"val" is a local variable used only in the scope of func1		
{
		// inside here we don't have access to "x" 
		// because we only see "val" within the function
		// we can't modify what we don't have
		// so that's why we only modify the value of "val"
		// within the scope of this function.
	printf("Before changing inside func1: %i\n", val);
	val = 17;
	printf("After changing inside func1: %i\n", val);
	printf("\n");

}

void func2(int *val)
{
		// in here we have the pointer "val"
		// which we set to the ADDRESS of x in main
		// by using the & (reference operator)
		// so when we use the reference of an int,
		// we get the memory address of "x" 
		// which is a pointer to the variable named "x"
		//
		// by having the address of x, we can modify it.
	printf("Before changing inside func2: %d\n", *val);
	*val = 100;
		// here we DEreference "val" which means that we are now looking at
		// what the VALUE of the int that "val" was POINTING to
		// so this statement is  the equivalent of "x = 100;" if it was
		// called from within our main()
	printf("After changing inside func2: %d\n", *val);
	printf("\n");

}

int main(void)
{
	int x = 5;
	int *point;
	printf("\n");
	printf("\n");

	printf("Before calling func1: %i\n", x);
	func1(x);
	printf("After calling func1: %i\n", x);
	printf("\n");

	point = &x; // Here we pass in the address of the variable 
				// "X" by using the reference operator "&"
				// because a memory address is essentially
				// a pointer to a variable
				// so now the int pointer is pointing to the 
				// memory address(system pointer)
				// of the variable "X"

	printf("Before calling func2: %d\n", *point);
	func2(point);
	printf("After calling func2: %d\n", *point);
	printf("\n\n\n");



	printf("SECOND EXAMPLE: %d\n", *point);
	printf("\n\n");

	int	my_name = 42;

	int*	my_ptr = &my_name;	 //NOT NORMINETTE COMPLIANT
	//these do the same thing
	int		*norm_ptr = &my_name; // Norm compiant

	int**	point_to_pointer = &my_ptr;

	printf("&my_name:\t\t%p\n", &my_name); // %p is for mem addresses/pointers
	printf("my_name:\t\t%d\n\n", my_name);
	
	printf("&my_ptr:\t\t%p (memory address of \"my_ptr\"\n", &my_ptr);
	printf("my_ptr:\t\t\t%p  <- Notice this is the same address of \"my_name\"\n", my_ptr); 
	printf("*my_ptr:\t\t%d\n\n", *my_ptr);


	printf("&norm_ptr:\t\t%p (memory address of \"norm_ptr\")\n", &norm_ptr);
	printf("norm_ptr:\t\t%p  <- Notice this is the same address of \"my_name\"\n", norm_ptr); 
	printf("*norm_ptr:\t\t%d\n\n", *norm_ptr);

	printf("&point_to_pointer:\t%p (memory address of \"point_to_pointer\")\n", &point_to_pointer);
	printf("&*point_to_pointer:\t%p (memory address of what the pointer \"point_to_pointer\" is pointing to)\n", &*point_to_pointer);
	printf("\timportant:\t\t ^^Notice this is the same address of \"my_pointer\"\n");
	printf("point_to_pointer:\t%p <- Notice this is the same address of \"my_name\"\n", my_ptr); 
	printf("*point_to_pointer:\t%p <- Notice this is the same address of \"my_name\"\n", *point_to_pointer);
	printf("**point_to_pointer:\t%d  Notice the value\"\n\n", **point_to_pointer);


}
/*
				"&"
	 	|memory address |	type	|	name	| 	value	|
		| 				|			|			|			|
		| 	0x000010	|	int		|	my_name	|	42		|
		| 				|			|			|			|
		| 	0x000020	|	int*	|	my_ptr	|  0x000010	|
		| 				|			|			|			|
		| 	0x000080	|	int		| *norm_ptr |  0x000010	|
		| 				|			|			|			|
The final line just shows how we have been keeping the "norm"
"norm_ptr" is still of the type (int*) 

so 	if we were to print "&my_name", "0x000010" would print out
	if we were to print "my_name", "42" would print out
	if we were to print "my_ptr", "0x000010" would print out
	if we were to print "&my_name", "42" would print out



*/
