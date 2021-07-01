//program to find if the given number is 2 power or not using bitwise operator
//if a number is power of two then only one bit will be set in its binary form 
#include<stdio.h>
#define GET_BIT(num,pos) ((num & (1<<pos)) != 0)

int main()
{
	unsigned int num = 0, i = 0, count = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 0; i < 32; i++)
	{
		if(GET_BIT(num,i))
		{
			count++;
		}
	}
	printf("count = %d\n",count);
	if(count == 1)
	{
		printf("%d is a power of 2",num);
	}
	else
	{
		printf("%d is not a power of 2",num);
	}
}
/*Output1:
Enter a number: 0
count = 0
0 is not a power of 2
  
since 2 power 0 = 1  
Output2: 
Enter a number: 1
count = 1
1 is a power of 2

Output3:
Enter a number: 7
count = 3
7 is not a power of 2

Output4:
Enter a number: 2
count = 1
2 is a power of 2

Output5:
Enter a number: 84
count = 3
84 is not a power of 2

Output6:
Enter a number: 64
count = 1
64 is a power of 2
*/