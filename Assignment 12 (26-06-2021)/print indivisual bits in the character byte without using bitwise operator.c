//program to print bits in the character byte without using bitwise operator, Using Union & Bit fields
#include<stdio.h>

typedef struct
{
	unsigned char b0:1;
	unsigned char b1:1;
	unsigned char b2:1;
	unsigned char b3:1;
	unsigned char b4:1;
	unsigned char b5:1;
	unsigned char b6:1;
	unsigned char b7:1;	
}bit_access;

typedef union 
{
	unsigned char one_byte;
	bit_access bits;
}num_byte;

int main()
{
	unsigned char num = 0;
	printf("Enter a number which is of one byte: ");
	scanf("%d",&num);
	num_byte input_byte;
	input_byte.one_byte = num;
	printf("Entered number individual bits are: \n");
	printf(" bit 7  ");
	printf(" bit 6  ");
	printf(" bit 5  ");
	printf(" bit 4  ");
	printf(" bit 3  ");
	printf(" bit 2  ");
	printf(" bit 1  ");
	printf(" bit 0  \n "); 	
	
	printf(" %d	",input_byte.bits.b7); 
	printf(" %d	",input_byte.bits.b6); 
	printf(" %d	",input_byte.bits.b5); 
	printf(" %d	",input_byte.bits.b4); 
	printf(" %d	",input_byte.bits.b3); 
	printf(" %d	",input_byte.bits.b2); 
	printf(" %d	",input_byte.bits.b1); 
	printf(" %d	",input_byte.bits.b0); 
}
/*Output1:
Enter a number which is of one byte: 7
Entered number individual bits are:
 bit 7   bit 6   bit 5   bit 4   bit 3   bit 2   bit 1   bit 0
  0      0       0       0       0       1       1       1
  
Output2:
Enter a number which is of one byte: 10
Entered number individual bits are:
 bit 7   bit 6   bit 5   bit 4   bit 3   bit 2   bit 1   bit 0
  0      0       0       0       1       0       1       0
*/