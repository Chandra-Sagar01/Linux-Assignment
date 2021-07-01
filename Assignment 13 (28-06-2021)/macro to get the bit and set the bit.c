//Write a macro to get the bit and set the bit
#include<stdio.h>

#define GET_BIT(num,pos) ((num & ( 1 << pos )) != 0)
#define SET_BIT(num,pos) (num | (1 << pos))

int main()
{
	char num = 0;
	int pos = 0;
	printf("Enter a number which is of one byte: ");
	scanf("%d",&num);
	
	printf("Enter the bit position to know the bit value and to be set in the number %d: ",num);
	scanf("%d",&pos);
	printf("The bit value at pos %d is %d\n",pos,GET_BIT(num,pos));
	printf("After setting bit%d in %d the value is %d",pos,num,SET_BIT(num,pos));
}
/*Output1:
Enter a number which is of one byte: 7
Enter the bit position to know the bit value and to be set in the number 7: 3
The bit value at pos 3 is 0
After setting bit3 in 7 the value is 15
  
Output2:
Enter a number which is of one byte: 10
Enter the bit position to know the bit value and to be set in the number 10: 0
The bit value at pos 0 is 0
After setting bit0 in 10 the value is 11
*/