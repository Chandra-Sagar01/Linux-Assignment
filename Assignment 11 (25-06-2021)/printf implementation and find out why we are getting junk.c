//Go to the printf implementation and find out why we are getting junk 
#include<stdio.h>

int main() 
{
	int a = 10;
   printf("a = %d\n");
   printf("abc%s");
}
/*
Output:
a = 12719008
abc‼W┬

Reason: printf() is a variadic function, printf() definition contains va_list arguments which stores the values of
variadic arguments which are passed into printf(), if format specifiers like %c %s are passed
without any variadic arguments then va_arg() returns the garbage value which gets displayed on screen
*/