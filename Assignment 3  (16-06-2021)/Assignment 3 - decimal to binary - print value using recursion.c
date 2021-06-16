//16-06-2021 Assignment 3 - decimal to binary  print value using recursion
#include<stdio.h>

int conversion(int num)
{
	if(num>0)
	{
		conversion(num/2);
		printf("%d",num%2);
	}	
}

int main()
{
	int num;
	printf("Enter a decimal number:\n");
	scanf("%d",&num);
	conversion(num);
}
/*Output:
Enter a decimal number:
10
1010
*/