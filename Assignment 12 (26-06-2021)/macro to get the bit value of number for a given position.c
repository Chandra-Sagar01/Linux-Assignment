//In a program, a Macro will take two arguments. It should return the bit value at the given position
#include<stdio.h>
#define BIT_VALUE(num,bit_pos) ((num & (1 << bit_pos)) != 0)

int main()
{
	char num = 0; 
	int bit_pos = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Enter the bit position to display bit value: ");
	scanf("%d",&bit_pos);
	
	printf("In %d The bit value at position %d is %d",num,bit_pos,BIT_VALUE(num,bit_pos));
}
/*Output1:
Enter a number: 8
Enter the bit position to display bit value: 3
In 8 The bit value at position 3 is 1

Output2:
Enter a number: 7
Enter the bit position to display bit value: 0
In 7 The bit value at position 0 is 1

Output3:
Enter a number: 7
Enter the bit position to display bit value: 3
In 7 The bit value at position 0 is 0
*/
