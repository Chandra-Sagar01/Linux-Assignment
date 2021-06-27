//Conclude structure copy of C is shallow copy or deep copy
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int a;
	int *ptr;
}int_struct;

int main()
{
	int_struct struct1, struct2;
	struct1.a = 20;
	struct1.ptr = (int*)malloc(sizeof(int));
	*struct1.ptr = 40;

	struct2 = struct1;
	if(struct2.ptr == struct1.ptr)
	{
        printf("C structure copy is shallow copy\n");
	}else
	{
	    printf("C structure copy is deep copy\n");
	}
	free(struct2.ptr);
}
/*
Output:
C structure copy is shallow copy
shallow copy: copy as it is - address(for pointer variables) and content of source struct to destination struct

deep copy: copy onlu values - contents of source variables(non-pointers) are copied to destination struct
for destination pointer variables, new memory is allocated and content from source address is copied
*/
