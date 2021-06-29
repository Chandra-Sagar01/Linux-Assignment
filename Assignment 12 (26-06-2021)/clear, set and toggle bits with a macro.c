//program to CLEAR, SET, TOGGLE with bitwise operator using Macro
#include<stdio.h>

#define SET_BIT(num,pos) (num | (1 << pos))
#define CLEAR_BIT(num,pos) (num & (~(1 << pos)))
#define TOGGLE_BIT(num,pos) (num ^ (1 << pos))

int main()
{
	unsigned char num = 0;
	int pos = 0;
	printf("Enter a number which is of one byte: ");
	scanf("%d",&num);
	
	printf("Enter the bit position to be set in the number %d: ",num);
	scanf("%d",&pos);
	printf("After setting bit %d the value is %d",pos,SET_BIT(num,pos));
	
	printf("\nEnter the bit position to be cleared in the number %d: ",num);
	scanf("%d",&pos);
	printf("After clearing bit %d the value is %d",pos,CLEAR_BIT(num,pos));
	
	printf("\nEnter the bit position to be toggled in the number %d: ",num);
	scanf("%d",&pos);
	printf("After toggling bit %d the value is %d",pos,TOGGLE_BIT(num,pos));
}
/*Output1:
Enter a number which is of one byte: 7
Enter the bit position to be set in the number 7: 3
After setting bit 3 the value is 15
Enter the bit position to be cleared in the number 7: 1
After clearing bit 1 the value is 5
Enter the bit position to be toggled in the number 7: 1
After toggling bit 1 the value is 5
  
Output2:
Enter a number which is of one byte: 8
Enter the bit position to be set in the number 8: 0
After setting bit 0 the value is 9
Enter the bit position to be cleared in the number 8: 3
After clearing bit 3 the value is 0
Enter the bit position to be toggled in the number 8: 2
After toggling bit 2 the value is 12
*/