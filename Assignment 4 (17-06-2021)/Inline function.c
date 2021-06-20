//Why inline function needs static storage class ?

//Inline Function are those function whose definitions are small and be substituted at the place where its function call is happened.

//Example code:
//In below program foo() is an inline function
#include <stdio.h>

// Inline function in C
inline int foo()
{
	return 2;
}

// Driver code
int main()
{

	int ret;

	// inline function call
	ret = foo();

	printf("Output is: %d\n", ret);
	return 0;
}

/*output: Compilation error!!!
In function `main':
undefined reference to `foo'
*/

//Compilation error reason: GCC performs inline substitution as the part of optimisation. So there is no function call present (foo) inside main

/*Solution to remove this error:
1. To resolve this problem use “static” before inline. 
Using static keyword forces the compiler to consider this inline function in the linker, and hence the program compiles and run successfully.

2. Add extern keyword before inline keyword
*/

//Fixed code:
#include <stdio.h>

// Inline function in C
static inline int foo()   //or  extern inline int foo()
{
	return 2;
}

// Driver code
int main()
{

	int ret;

	// inline function call
	ret = foo();

	printf("Output is: %d\n", ret);
	return 0;
}
//Output: Output is: 2

