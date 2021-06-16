//16-06-2021 Assignment 3 - program to print from N to 1 using recursion
#include <stdio.h>

int print_num(int num)
{
	if(num > 0)
	{
		printf("%d ",num);
		print_num(num-1);
	}
}

int main()
{
	int num;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	print_num(num);
}
/*Output:
Enter an integer:
12
12 11 10 9 8 7 6 5 4 3 2 1
*/