//16-06-2021 Assignment 3 - program to print from 1 to N using recursion
#include <stdio.h>

int print_num(int num)
{
	if(num > 0)
	{
		print_num(num-1);
		printf("%d ",num);
		return 1;
	}
	else
	{
		return 1;
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
9
1 2 3 4 5 6 7 8 9
*/