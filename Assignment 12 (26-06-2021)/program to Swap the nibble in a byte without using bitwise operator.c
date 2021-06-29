//program to Swap the nibble in a byte without using bitwise operator
#include<stdio.h>

typedef struct
{
	unsigned char lower_nibble:4;
	unsigned char upper_nibble:4;		
}nibble_access;

typedef union 
{
	unsigned char one_byte;
	nibble_access nibbles;
}num_byte;

int main()
{
	unsigned char num = 0, temp = 0;
	printf("Enter a number which is of one byte: ");
	scanf("%x",&num);
	printf("before nibble swap num = 0x%x\n",num);
	
	num_byte input_byte;
	input_byte.one_byte = num;
	
	temp = input_byte.nibbles.lower_nibble;
	input_byte.nibbles.lower_nibble = input_byte.nibbles.upper_nibble;
	input_byte.nibbles.upper_nibble = temp;
	
	num = input_byte.one_byte;
	
	printf("After nibble swap num = 0x%x\n",num);	
}
/*Output1:
Enter a number which is of one byte: ab
before nibble swap num = 0xab
After nibble swap num = 0xba

Output2:
Enter a number which is of one byte: 7
before nibble swap num = 0x7
After nibble swap num = 0x70

*/
