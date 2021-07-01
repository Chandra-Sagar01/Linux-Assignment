//program to count set bits in a number
#include<stdio.h>
#define GET_BIT(num,pos) ((num & ( 1 << pos )) != 0)

int main()
{
	unsigned char num = 0;
	int pos = 0, count = 0;
	printf("Enter a number which is of one byte: ");
	scanf("%d",&num);
	
	printf("The binary representation of %d is:\n",num);
	for(pos = 7; pos >= 0 ; pos--)
	{
		printf("%d ",GET_BIT(num,pos));
	}
	
	for(pos = 7; pos >= 0 ; pos--)
	{
		if(GET_BIT(num,pos))
		{
			count++;
		}
	}
	printf("\nThe number of set bits are %d",count);
}
/*Output1:
Enter a number which is of one byte: 7
The binary representation of 7 is:
0 0 0 0 0 1 1 1
The number of set bits are 3
  
Output2:
Enter a number which is of one byte: 255
The binary representation of 255 is:
1 1 1 1 1 1 1 1
The number of set bits are 8
*/